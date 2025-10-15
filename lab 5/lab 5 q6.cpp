#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int id;
		static int totalEmployees;
    public:
    	Employee(string n,int i){
    		name=n;
    		id=i;
    		totalEmployees++;
		}
	void show(){
		cout<<"Employee ID: "<<id<<",Name: "<<name<<endl;		
	}
	static int getTotalEmployees(){
		return totalEmployees;
	}	
};
int Employee::totalEmployees=0;
class ClientProject{
private:
Employee*team[5];
int teamSize;
public:
ClientProject(){
	teamSize=0;
}
void addEmployee(Employee*e){
	if(teamSize<5){
		team[teamSize++]=e;
	}
}
void showTeam(){
	cout<<"\n--Project Team--\n";
	for(int i=0;i<teamSize;i++){
		team[i]->show();
	}
}	
};
int main(){
	Employee e1("Muskan",103);
	Employee e2("Ash",104);
	Employee e3("Vanshika",105);
	ClientProject project1;
	project1.addEmployee(&e1);
	project1.addEmployee(&e2);
	project1.addEmployee(&e3);
	project1.showTeam();
	 cout << "\nTotal Employees in Company: " << Employee::getTotalEmployees() << endl;
	
}
