#include<iostream>
#include<string>
using namespace std;
class mobileaccount{
	private:
		double balance;
		string  phonenumber;
	public:
	mobileaccount(){
		balance=50.0;
		phonenumber=" ";	
	}
	mobileaccount(double bal,string no){
		 balance=bal;
		 phonenumber=no;
	}
	void display() const{
		cout<<"Balance: "<<balance<<endl;
		cout<<"Phone number: "<<phonenumber<<endl;
	}	
};
int main(){
	mobileaccount a1;
	a1.display();
	mobileaccount a2(200.0,"03163966948");
	a2.display();
}
