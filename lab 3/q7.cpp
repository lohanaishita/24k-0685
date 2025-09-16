#include<iostream>
using namespace std;
class Student{
	string name;
	int Rollno;
	double marks;
	char grade;
	public:
		 Student(string n,int r,double m){
			name=n;
			Rollno=r;
			marks=m;
			grade= ' ';
		}
	void CalculateGrade(){
		if(marks>=90)
		grade='A';
		else if(marks>=80) grade='B';
	    else if(marks>=70) grade='C';
	    else grade='F';
	}
	void DisplayInfo(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll no: "<<Rollno<<endl;
		cout<<"Marks: "<<marks<<endl;
		cout<<"Grade: "<<grade<<endl;
	}	
};
int main(){
	Student s1("Ash",685,90);
Student	s2("Tania",661,70);
	s1.CalculateGrade();
	s1.DisplayInfo();
	s2.CalculateGrade();
	s2.DisplayInfo();
}
