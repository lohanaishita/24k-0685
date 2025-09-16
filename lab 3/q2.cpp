#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		int rollNo;
		public:
			string name;
	void setrollNo(int r){
				rollNo=r;
			}
	int getrollNo(){
		return rollNo;
	}		
};
int main(){
	Student s1;
	s1.name="Ash";
	s1.setrollNo(685);
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Roll no: "<<s1.getrollNo()<<endl;
	
}
