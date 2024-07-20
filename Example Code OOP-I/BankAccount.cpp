#include <iostream>
#include <string>
//header file required for running c++ 
using namespace std;

class Account{
	private:
		int AccountNo;
		int balance;
	public:
		 Account(){
			AccountNo=0;
			balance=-1;
		}
		 Account(int no,int am){
			cout<<"\nWelcome to ABC Bank\n";
			AccountNo=no;
			balance=am;
		} 
		void setAccount(int acNo){
			AccountNo=acNo;
		}
		int getAccountNo(){
			return AccountNo;
		}

		void setBalance(int b){
			balance=b;
		}
		int getBalance(){
			return balance;
		}
		void createAccount(){
			cout<<"\nEnter Account No\n";
			cin>>AccountNo;
			cout<<"\nEnter Initial Deposit\n";
			cin>>balance;

		}
		void BalanceInquiry(){

			cout<<"\nAccount No "<<AccountNo;
			cout<<"\nAvailable Balance "<<balance;
		}
		void Deposit(){
		int am;
		cout<<"\nEnter Amount you want to deposit\n";
		cin>>am;
		if(am>0)
			balance+=am; //balance=balance+am;
		else
			cout<<"\nDeposit must be a +ive value\n";

	}
	void Deposit(int am){
		if(am>0)
			balance+=am; //balance=balance+am;
		else
			cout<<"\nDeposit must be a +ive value\n";
	}
	void Withdraw(){
		int am;
		cout<<"\nEnter Amount you want to withdraw\n";
		cin>>am;
		if(am<=balance)
			balance-=am; //balance=balance-am;
		else
			cout<<"\nInsufficient balance\n";


	}
};

void transfer(Account obj1, Account obj2){
	int am;
		cout<<"\nEnter Ammount you want to transfer\n";
		cin>>am;
		if(obj1.getBalance() >am)
			{
			cout<<"\nTransfering amount\n";
			obj2.setBalance( obj2.getBalance()+am);
			obj1.setBalance ( obj1.getBalance()-am);
			}
		else
			cout<<"\nInsufficient ammount in Account No"<<obj1.getAccountNo();
	obj1.BalanceInquiry();
	obj2.BalanceInquiry();
}
int main(){
	Account acc1,acc2;
	Account acc3(103,10000);
	Account acc4(104,100);
	//acc3.BalanceInquiry();
	//acc3.Withdraw();
	acc3.BalanceInquiry();

	transfer(acc3,acc4);
	acc3.BalanceInquiry();
	acc4.BalanceInquiry();
	/*acc1.createAccount();
	acc2.createAccount();
	acc1.BalanceInquiry();
	acc2.BalanceInquiry();
	acc2.Deposit();
	acc2.BalanceInquiry();
	acc1.Deposit(300);
	acc1.BalanceInquiry();
	*/	
	return 0;
}
