#include<iostream>
using namespace std;
class CallRecord{
	private:
		string callerid;
		int durationmin;
	static int totalCalls;
	public:
	CallRecord(){
		callerid=" ";
		durationmin=0;
	}
	CallRecord(string id,int min){
		callerid=id;
		durationmin=min;
	
	}
	void input(){
		cout<<"Enter Caller ID: ";
		cin>>callerid;
		cout<<"Enter  Call Duration(minutes): ";
		cin>>durationmin;
		totalCalls++;
	}
	void display(){
		cout<<"Caller ID: "<<callerid <<", Duration: "<<durationmin<<" minutes"<<endl;
	}
	static int getTotalCalls(){
		return totalCalls;
	}
};
int CallRecord::totalCalls=0;
int main(){
	const int SIZE=20;
	CallRecord calls[SIZE];
	cout<<"Logging calls for one shift"<<endl;
	for(int i=0;i<SIZE;i++){
		cout<<"\nCall #"<<(i+1)<<":\n";
		calls[i].input();
	}
cout<<"\n---Call Records---\n";	
for(int i=0;i<SIZE;i++){
	calls[i].display();
}
cout<<"\n Total Calls Logged: "<<CallRecord::getTotalCalls()<<endl;	
}
