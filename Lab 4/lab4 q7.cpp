#include<iostream>
#include<string>
using namespace std;
class securebankaccount{
	private:
	int accountno;
	double balance;
	const string accounttype;
	int* loghistory;
	public:
	securebankaccount(int accountno,double initialbalance,string type,int logsize):accounttype(type){
		if(initialbalance<500.0){
			cout<<"Error"<<endl;
			this->balance=0.0;
			this->accountno=accountno;
			loghistory=NULL;
		}else{
			this->accountno=accountno;
			this->balance=initialbalance;
			loghistory = new int;
            *loghistory = logsize;
		}
	}
securebankaccount(const securebankaccount& other):
accounttype(other.accounttype){
this->balance=other.balance;
this->accountno=other.accountno;
if(other.loghistory!=NULL){
	loghistory=new int(*(other.loghistory));
}else{
	loghistory=NULL;
}	
}
void display(){
	cout<<"Account number: "<<accountno<<endl;
	cout<<"Balance: "<<balance<<endl;
	cout<<"Account type: "<<accounttype<<endl;
	if(loghistory!=NULL) cout<<"log size: "<<*loghistory<<endl;
	else cout<<"Log history not initialized."<<endl;
}
~securebankaccount(){
	delete loghistory;
	cout<<"Account: "<<accountno<<" memory cleared."<<endl;
}	
};
int main(){
	securebankaccount acc1(101,1000.0,"current",5);
	acc1.display();
	cout<<"Deep copy"<<endl;
	securebankaccount acc2=acc1;
	acc2.display();
	
}
