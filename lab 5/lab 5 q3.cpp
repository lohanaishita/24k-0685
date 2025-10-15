#include<iostream>
using namespace std;
class Doc{
	public:
		string name;
		string specialization;
	Doc(string n,string s){
		name=n;
		specialization=s;
	}
	void show(){
	cout<<"Doctor Name: "<<name<<", Specialization: "<<specialization<<endl;	
	}
};
class hospital{
	public:
		string hospitalname;
		Doc*doctor;
		hospital(string name){
			hospitalname=name;
			doctor=NULL ;
		}
	void assignDoc(Doc*d){
		doctor=d;
	}
	void showDoctor(){
		cout<<"Hospital: "<<hospitalname<<endl;
		if(doctor!=NULL){
			doctor->show();
		}else{
			cout<<"No doctor assigned."<<endl;
		}
	}	
};	
int main(){
	Doc d1("Dr Muskan","Cardiologist");
	hospital h1("Agha khan");
	hospital h2("City Hospital");
	h1.assignDoc(&d1);
	h1.showDoctor();
	h2.assignDoc(&d1);
	h2.showDoctor();
}	

