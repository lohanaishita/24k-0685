#include<iostream>
#include<string>
using namespace std;
class currencyexchange{
	private:
		const double pkr_to_usd_rate;
		string& branchname;
		int totaltransactions;
	public:
	currencyexchange(double rate,string& branch,int transactions):
	pkr_to_usd_rate(rate),branchname(branch),totaltransactions(transactions){}
		double convertpkrtousd(double pkr){
			totaltransactions++;
			return pkr/pkr_to_usd_rate;
		}
};
int main(){
	string branch= "HBL BANK";
	currencyexchange counter(270.50,branch,0);
	double usd=counter.convertpkrtousd(2705);
	cout<<"2705 pkr = "<<usd<<" USD"<<endl;
}
