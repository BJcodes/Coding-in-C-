#include <iostream>
#include <string>
//header file required for running c++ 
using namespace std;

class Account{
	private:
		int data;
	public:
		Account(){
			cout<<"\nNo argument constructor called\n";
			data=500;
	}
		Account(int a){
			
			cout<<"\nOne argument constructor called\n";
			data=a;
	}

	void setData(int a){
		data=a;
	}
	int inquiry(){
		return data;
	}
};

int main(){

	Account ac1,ac2;//no arg constructor called automatically
	Account ac3(1000);//one arg constructor called automatically
	cout<<"\nac1 Inquiry, Balance is "<<ac1.inquiry();
	cout<<"\nac2 Inquiry, Balance is "<<ac2.inquiry();
	cout<<"\nac3 Inquiry, Balance is "<<ac3.inquiry();
return 0;
}
