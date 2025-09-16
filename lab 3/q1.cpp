#include<iostream>
#include<string.h>
using namespace std;
class Student{
	public:
		string name;
		int rollNo;
};
int main(){
	 Student s1;
 s1.name="Ash";
 s1.rollNo= 685;
 	cout<<"Name: "<<s1.name<<endl;
	cout<<"Roll NO: "<<s1.rollNo<<endl;
}

