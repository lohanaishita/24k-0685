#include<iostream>
#include<string>
using namespace std;
class nuces_student{
	private:
	int id;
	string name;
	public:
	nuces_student(){
		id=0;
		name="not registered";
	}
	nuces_student(int id){
	this->id=id;
    name="Name Pending";	
	}
	nuces_student(int id,string name){
		this->id=id;
		this->name=name;
	}
	void display(){
		cout<<"ID: "<<id<<",Name: "<<name<<endl;
	}	
};
int main(){
	nuces_student n1;
	n1.display();
	nuces_student n2(102);
	n2.display();
	nuces_student n3(102,"Ashita");
	n3.display();
	
}
