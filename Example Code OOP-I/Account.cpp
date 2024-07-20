#include <iostream>
#include <string>
//header file required for running c++ 
using namespace std;

class Account{
	private:
	float balance;
	char *name;
	//two data members balance and name
	public:

	void setBalance(float b){
		balance=b;
	}

	void setName(char *str){
		name=str;
	}
	int withdraw(float amount){

		if(amount>balance){
			cout<<"\nTransaction Failed, insufficient balance\n";
			return 0;
		}
		else {

			balance=balance-amount;
			cout<<"\nTransaction Successfull";
			return 1;
		}
	}

	void deposit(float amount){
		if(amount>0)
		{
			balance=balance+amount;
			cout<<"\nSuccessfully deposited Rs." << amount <<" Into your account\n";
		}
		else
			cout<<"deposit amount must be positive value\n";
	}
	void balanceInquiry(){

		cout<<"\nName :  "<<name;
		cout<<"\nAvailable Balance:  "<<balance;
	}
	void transfer(Account acc1, Account acc2, float amount){
		cout<<"\nWelcome to Transfer function\n";
		if(amount>acc1.balance){
			cout<<"Insufffienct balance, Transfer not possible\n";		
		}
		else{

			acc2.balance=acc2.balance+amount;
			acc1.balance=acc1.balance-amount;
			cout<<"Inquiry inside transfer function\n";
			acc1.balanceInquiry();
			acc2.balanceInquiry();
		}
		cout<<"\nTransfer success\n";
	}

};

int main(){
	Account acc1,acc2;
	int amount;
	acc1.setBalance(1000);
	acc1.setName("Ali");
	

	acc2.setBalance(5);
	acc2.setName("Irfan");
	acc1.balanceInquiry();
	acc2.balanceInquiry();
	
	acc1.transfer(acc1,acc2,500);
	acc1.balanceInquiry();
	acc2.balanceInquiry();
	/*acc1.balanceInquiry();
	cout<<"\nEnter amount you want to withdraw";
	cin>>amount;
	acc1.withdraw(amount);
	acc1.balanceInquiry();

	cout<<"\nEnter amount you want to deposit";
	cin>>amount;
	acc1.deposit(amount);
	acc1.balanceInquiry();

	*/
	cout<<"\nThank you for using FATA ATM Service\nProgram Ended\n";
	return 0;
}
