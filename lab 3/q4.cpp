#include<iostream>
#include<string>
using namespace std;
class Calculator{
	private:
		int num1,num2;
	public:
	void setNumbers(int n1,int n2);
	int addNumbers();
};
void Calculator :: setNumbers(int n1,int n2){
	num1=n1;
	num2=n2;
}
int Calculator:: addNumbers(){
	return num1+num2;
}

	int main(){
		Calculator c1;
		c1.setNumbers(5,6);
		cout<<"Sum: "<<c1.addNumbers()<<endl;
	}
