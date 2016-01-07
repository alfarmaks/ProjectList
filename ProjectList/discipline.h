#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Discipline{
private:
	string name;
public:
	Discipline(){}
	Discipline(Discipline const &x){
		this->name = x.getName();
	}
	Discipline(string Name){
		this->name = Name;
	}
	string getName() const{
		return this->name;
	}

	void setName(string x){
		this->name = x;
	}
};

class ListOfDiscipline{
private:
	vector<Discipline> List;
	int size;
	bool flag = false;
public:
	ListOfDiscipline(ListOfDiscipline const &X){
		List.clear();
		size = X.getSize();
		this->flag = X.getOpen();
		for (int i = 0; i < size; i++){
			List.push_back(X[i]);
		}
	}
	ListOfDiscipline(){
		size = 0;
	}
	ListOfDiscipline(string directory){
		ifstream file(directory, ios_base::in);
		size = List.size();
		if (file.is_open()){
			flag = true;
			string discipline;
			while (!file.eof()){
				file >> discipline;
				Discipline A(discipline);
				List.push_back(A);
				size++;
			}
			file.close();
		}
		else {
			file.close();
		}
	}
	void add(Discipline x){ 
		List.push_back(x); 
		size++;
	}
	Discipline operator[](int i) const{
		return this->List[i];
	}
	

	bool find(string x){
		for (int i = 0; i < size; i++){
			if (List[i].getName() == x){ 
				return true; 
			}
		}
		return false;
	}
	int getSize() const { return this->size; }
	bool getOpen() const{ return this->flag; }

	void saveDiscipline(string directory){
		ofstream file(directory, ios_base::out | ios_base::trunc);
		if (file.is_open()){
			for (int i = 0; i < size; i++) {
				if (i != size - 1)
					file << List[i].getName() << endl;
				else
					file << List[i].getName();
			}
			file.close();
		}
		else {
			file.close();
		}
	}
};