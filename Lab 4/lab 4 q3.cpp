#include<iostream>
using namespace std;
class propertydeed{
	private:
	int *ownerid;
	public:
		propertydeed(int id){
			ownerid=new int;
			*ownerid=id;
		}
	propertydeed(const propertydeed& other){
		ownerid=other.ownerid;		
	}
	propertydeed(const propertydeed& other,bool deep){
		ownerid=new int;
		*ownerid=*(other.ownerid);
	}
	void setownerid(int id){
		*ownerid=id;
	}
	void display(){
		cout<<"OwnerID value: "<<*ownerid
		<<" |Memory Address: "<<ownerid<<endl;
	}
	propertydeed(){
		delete ownerid;
	}	
};
int main(){
	propertydeed p1(101);
	cout<<"Original"<<endl;
	p1.display();
	propertydeed shallow(p1);
	cout<<"Shallow copy"<<endl;
	shallow.display();
	propertydeed deep(p1,true);
	cout<<"Deep copy: "<<endl;
	deep.display();
	cout<<"---Changing original's data---"<<endl;
	p1.setownerid(202);
	cout<<"Original:\n"; p1.display();
	cout<<"Shallow:\n"; shallow.display();
	cout<<"Deep:\n"; deep.display();
	
	
}
