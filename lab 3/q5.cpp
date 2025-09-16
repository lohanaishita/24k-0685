#include<iostream>
using namespace std;
class Concrete{
	private:
		string message;
	public:
	Concrete(string msg){
		message=msg;
	}
	void displayMsg(){
		cout<<"Message: "<<message<<endl;
	}	
};
int main(){
	Concrete cc("hello");
	cc.displayMsg();
	
}
