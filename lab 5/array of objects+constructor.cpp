#include<iostream>
using namespace std;
class employee{
	int id;
	double salary;
	public:
		employee(int i,double s){
			id=i;
			salary=s;
		}
	void show(){
		cout<<"ID: "<<id<<", Salary: "<<salary<<endl;
	}	
};
int main(){
	employee e[3]={employee(1,2000),employee(2,30000),employee(3,70000)};
	for(int i=0;i<3;i++){
		e[i].show();
	}
}
