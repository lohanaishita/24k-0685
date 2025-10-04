#include<iostream>
using namespace std;
class serversession{
	private:
		int sessionid;
		public:
			serversession(int id){
				sessionid=id;
				cout<<"Session"<<sessionid<<" started"<<endl;
			}
	~serversession(){
		cout<<"Session "<<sessionid<<" ended"<<endl;
	}		
};
int main(){
	cout<<"Entering block"<<endl;
	{
		serversession s1(101);
	}
	cout<<"Exited block."<<endl;
}

