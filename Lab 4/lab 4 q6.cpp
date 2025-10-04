#include<iostream>
#include<string>
using namespace std;
class orderdetails{
	private:
		int orderid;
		string itemname;
		const double deliveryfee;
	public:
	orderdetails(int orderid,string itemname,double fee):deliveryfee(fee){
		this->orderid= orderid;
		this->itemname=itemname;
	}
	void display(){
		cout<<"Order id: "<<orderid<<endl;
		cout<<"Item name: "<<itemname<<endl;
		cout<<"Delivery fees: "<<deliveryfee<<endl;
	}
	~orderdetails(){
		cout<<"Order "<<orderid<<" memory cleared"<<endl;
	}	
};
int main(){
	orderdetails order1(103,"pen",50.0);
	order1.display();
	orderdetails order2(107,"scent",60.0);
	order2.display();
}
