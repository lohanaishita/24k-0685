#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	public:
	string make;
	string mode;
	void displayInfo(){
		cout<<"Make: "<<make<<endl;
		cout<<"Model: "<<mode<<endl;
	}	
};
class Car: public Vehicle{
	public:
		string EngineType;
		void displayInfo(){
			Vehicle :: displayInfo();
			cout<<"Engine Type: "<<EngineType<<endl;
		}
};
int main(){
	Car c1;
	c1.make="Toyota";
	c1.mode="Corolla";
	c1.EngineType="Petrol";
	c1.displayInfo();
}
