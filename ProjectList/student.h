#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Student
{
public:
	Student(Student const &X){
		this->name = X.getName();
		this->secondName = X.getSecondName();
		this->surName = X.getSurName();
	}

	Student(){}

	Student(string secondname, string Name, string surname){
		this->secondName = secondname;
		this->name = Name;
		this->surName = surname;
	}
	
	void setName(string x){	this->name = x;	}
	void setSecondName(string x){ this->secondName = x; }
	void setSurName(string x){ this->surName = x; }

	string getName() const{ return this->name; }
	string getSecondName() const{ return this->secondName; }
	string getSurName() const{ return this->surName; }

private:
	string name;
	string secondName;
	string surName;
};

//List of student
class ListOfStudents{
	vector<Student> List;
	int size;
	bool flag = false;
public:
	ListOfStudents(ListOfStudents const &X){
		List.clear();
		size = X.getSize();
		this->flag = X.getOpen();
		for (int i = 0; i < size; i++){
			List.push_back(X[i]);
		}
	}
	ListOfStudents(){
		size = 0;
	}
	ListOfStudents(string directory){
		ifstream file(directory, ios_base::in);
		if (file.is_open()){
			flag = true;
			string name;
			string secondName;
			string surName;
			while (!file.eof()){
				file >> secondName;
				file >> name;
				file >> surName;
				Student A(secondName, name, surName);
				List.push_back(A);
				size = List.size();
			}
			file.close();
		}
		else { 
			file.close(); 
		}
	}
	void add(Student x){
		List.push_back(x);
		size = List.size();
	}
	void add(string secondName, string name, string surName){
		Student x(secondName, name, surName);
		List.push_back(x);
		size = List.size();
	}

	int getSize() const{ return this->size; }
	
	Student operator[](int i) const{
		return this->List[i];
	}
	bool getOpen() const{ 
		return this->flag;
	}
	void saveStudents(string directory){
		ofstream file(directory, ios_base::out | ios_base::trunc);
		if (file.is_open()){
			for (int i = 0; i < size; i++) {
				if (List[i].getName().empty()) { List[i].setName("-"); }
				if (List[i].getSecondName().empty()) { List[i].setSecondName("-"); }
				if (List[i].getSurName().empty()) { List[i].setSurName("-"); }
				if (i != size - 1)
					file << List[i].getSecondName() << "\t" << List[i].getName() << "\t" << List[i].getSurName() << endl;
				else
					file << List[i].getSecondName() << "\t" << List[i].getName() << "\t" << List[i].getSurName();
			}
			file.close();
		}
		else {
			file.close();
		}
	}
};
