#include  <iostream>
using namespace std;
class Kitchen{
	public:
		Kitchen(){
		cout<<"Kitchen created."<<endl;	
		}
	void show(){
		cout<<"This apartment has a modular kitchen."<<endl;		
	}
	~Kitchen(){
		cout<<"Kitchen destroyed."<<endl;
	}	
};
class Apartment{
	private:
		const int apartmentID;
		Kitchen kitchen;
	public:
	Apartment(int id):apartmentID(id){
		cout<<"Apartment "<<apartmentID<<" created."<<endl;
	}
	void showDetails(){
		cout<<"Apartment ID: "<<apartmentID<<endl;
		kitchen.show();
	}
	~Apartment(){
		cout<<"Apartment "<<apartmentID<<" destroyed"<<endl;
	}	
};
int main(){
	Apartment a1(103);
	a1.showDetails();
	}
