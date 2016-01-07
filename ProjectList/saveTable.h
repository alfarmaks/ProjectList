#include<fstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
using namespace std;

class oneRow{
private:
	Student stud;
	Discipline discipline;
	string value;
public:
	oneRow(){}
	oneRow(oneRow const & X){
		this->stud = X.getStud();
		this->discipline.setName(X.getDiscipline());
		this->value = X.getValue();
	}

	oneRow(Student student, string Discipline, string val){
		this->stud = student;
		this->discipline.setName(Discipline);
		this->value = val;
	}

	bool operator==(oneRow X){
		bool flag = true;
		if (this->stud.getName() != X.getStud().getName()) flag = false;
		if (this->stud.getSecondName() != X.getStud().getSecondName()) flag = false;
		if (this->stud.getSurName() != X.getStud().getSurName()) flag = false;
		if (this->discipline.getName() != X.getDiscipline()) flag = false;
		if (this->value != X.getValue()) flag = false;
		return flag;
	}

	void setName(string x){ this->stud.setName(x); }
	void setSecondName(string x){ this->stud.setSecondName(x); }
	void setSurName(string x){ this->stud.setSurName(x); }
	void setDiscipline(string x){ this->discipline.setName(x); }
	void setValue(string x){ this->value = x; }

	Student getStud() const {
		return this->stud;
	}
	string getDiscipline() const{ return this->discipline.getName(); }
	string getValue()const{ return this->value; }
};

//table with students
class tableWithStudents{
private:
	vector<oneRow> table;
	int size;
	bool flag = false;
public:
	//different types of constructors
	tableWithStudents(tableWithStudents const &X){
		this->table.clear();
		this->size = X.getSize();
		this->flag = X.getOpen();
		for (int i = 0; i < size; i++){
			table.push_back(X[i]);
		}
	}
	tableWithStudents(){
		size = 0;
	}
	tableWithStudents(string directory){
		ifstream file(directory, ios_base::in);
		if (file.is_open()){
			flag = true;
			string name;
			string secondName;
			string surName;
			string discipline;
			string val;
			while (!file.eof()){
				file >> secondName;
				file >> name;
				file >> surName;
				file >> discipline;
				file >> val;
				oneRow X(Student(secondName, name,surName), discipline, val);
				table.push_back(X);
				this->size = table.size();
			}
			file.close();
			sort();
		}
		else {
			file.close();
		}
	}
	tableWithStudents(ListOfStudents X){
		this->size = X.getSize();
		for (int i = 0; i < size; i++){
			oneRow A(Student(X[i].getSecondName(), X[i].getName(), X[i].getSurName()), "", "");
			table.push_back(A);
		}
	}
	//add oneRow or some data
	void add(oneRow X){
		table.push_back(X);
		size = table.size();
	}
	void add(string secondName, string name, string surName, string Discipline, string val){
		oneRow x(Student(secondName, name, surName), Discipline, val);
		table.push_back(x);
		size = table.size();
	}

	//sort data by secondName
	void sort(){
		int i, j, k;
		oneRow t;
		for (k = getSize() / 2; k > 0; k /= 2)
			for (i = k; i < size; i++)
			{
				t = table[i];
				for (j = i; j >= k && t.getStud().getSecondName() < table[j - k].getStud().getSecondName(); j -= k)
					table[j] = table[j - k];
				table[j] = t;
			}
	}
	//return size of table(number of rows)
	int getSize() const{ return this->size; }
	//overload indexing
	oneRow operator[](int i) const{
		return this->table[i];
	}
	
	bool getOpen() const{
		return this->flag;
	}

	tableWithStudents updateTable(System::Windows::Forms::DataGridView ^ gridView){
		tableWithStudents result;
		for (int i = 0; i < gridView->RowCount - 1; i++){
			string name = msclr::interop::marshal_as<string>(gridView->Rows[i]->Cells[1]->Value->ToString());
			string secondName = msclr::interop::marshal_as<string>(gridView->Rows[i]->Cells[0]->Value->ToString());
			string surname = msclr::interop::marshal_as<string>(gridView->Rows[i]->Cells[2]->Value->ToString());
			string oneDiscipline = msclr::interop::marshal_as<string>(gridView->Rows[i]->Cells[3]->Value->ToString());
			string val = msclr::interop::marshal_as<string>(gridView->Rows[i]->Cells[4]->Value->ToString());
			result.add(secondName, name, surname, oneDiscipline, val);
		}
		return result;
	}
	bool find(oneRow X){
		for (int i = 0; i < this->size; i++)
			if (table[i] == X)
				return true;
		return false;
	}
	tableWithStudents find(string SecondName, string Name, string SurName){
		tableWithStudents result;
		int count = 0;
		bool flags[3] = { false, false, false };
		tableWithStudents res[3];
		if (SecondName != "прізвище"){
			flags[1] = true;
			count++;
		}
		if (Name != "ім'я"){
			flags[0] = true;
			count++;
		}
		if (SurName != "по-батькові"){
			flags[2] = true;
			count++;
		}
		if (!count) return result;
		//find by surname
		if (flags[2]){
			for (int i = 0; i < size; i++){
				string surname = table[i].getStud().getSurName();
				surname = msclr::interop::marshal_as<string>(msclr::interop::marshal_as<System::String^>(surname)->ToString()->ToLower());
				size_t x = surname.find(SurName);
				if ( x != string::npos && surname[0] == SurName[0]){
					res[2].add(table[i]);
				}
			}
			res[2].sort();
		}
		//find by name
		if (flags[0]){
			for (int i = 0; i < size; i++){
				string name = table[i].getStud().getName();
				name = msclr::interop::marshal_as<string>(msclr::interop::marshal_as<System::String^>(name)->ToString()->ToLower());
				size_t x = name.find(Name);
				if (x != string::npos && name[0] == Name[0]){
					res[0].add(table[i]);
				}
			}
			res[0].sort();
		}
		//find by secondname
		if (flags[1]){
			for (int i = 0; i < size; i++){
				string secondname = table[i].getStud().getSecondName();
				secondname = msclr::interop::marshal_as<string>(msclr::interop::marshal_as<System::String^>(secondname)->ToString()->ToLower());
				size_t x = secondname.find(SecondName);
				if (x != string::npos && secondname[0] == SecondName[0]){
					res[1].add(table[i]);
				}
			}
			res[1].sort();
		}
		if (count == 1){
			if (flags[0]){
				return res[0];
			}
			else if(flags[2]){
				return res[2];
			}
			else if (flags[1]){
				return res[1];
			}
		}
		else if (count == 2){
			for (int i = 0; i < 2; i++){
				for (int j = i + 1; j < 3; j++){
					if (flags[i] && flags[j]){
						for (int k = 0; k < res[i].getSize(); k++){
							for (int g = 0; g < res[j].getSize(); g++){
								if (res[i][k] == res[j][g]){
									if (!result.find(res[i][k])){
										result.add(res[i][k]);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (count == 3){
			for (int i = 0; i < res[1].getSize(); i++){
				for (int j = 0; j < res[0].getSize(); j++){
					for (int k = 0; k < res[2].getSize(); k++){
						if (res[1][i] == res[0][j] && res[1][i] == res[2][k]){
							if (!result.find(res[1][i])){
								result.add(res[1][i]);
							}
						}
					}
				}
			}
		}
		return result;
	}
	tableWithStudents findByDiscipline(string key){
		tableWithStudents result;
		for (int i = 0; i < size; i++){
			string disc = table[i].getDiscipline();
			disc = msclr::interop::marshal_as<string>(msclr::interop::marshal_as<System::String^>(disc)->ToString()->ToLower());
			if (key == disc){
				result.add(table[i]);
			}
		}
		return result;
	}
	tableWithStudents findByValue(string key){
		tableWithStudents result;
		for (int i = 0; i < size; i++){
			string val = table[i].getValue();
			if (key == val){
				result.add(table[i]);
			}
		}
		return result;
	}
	//save table in directory
	void saveTable(string directory){
		ofstream file(directory, ios_base::out | ios_base::trunc);
		if (file.is_open()){
			for (int i = 0; i < size; i++) {
				if (table[i].getStud().getName().empty()) { table[i].setName("-"); }
				if (table[i].getStud().getSecondName().empty()){ table[i].setSecondName("-"); }
				if (table[i].getStud().getSurName().empty()) { table[i].setSurName("-"); }
				if (table[i].getDiscipline().empty()){ table[i].setDiscipline("-"); }
				if (table[i].getValue().empty()) { table[i].setValue("-"); }
				if (i != size - 1)
					file << table[i].getStud().getSecondName() << "\t" << table[i].getStud().getName() << "\t" << table[i].getStud().getSurName() << "\t" << table[i].getDiscipline()<< "\t" << table[i].getValue() << endl;
				else
					file << table[i].getStud().getSecondName() << "\t" << table[i].getStud().getName() << "\t" << table[i].getStud().getSurName() << "\t" << table[i].getDiscipline() << "\t" << table[i].getValue();
			}
			file.close();
		}
		else {
			file.close();
		}
	}
};