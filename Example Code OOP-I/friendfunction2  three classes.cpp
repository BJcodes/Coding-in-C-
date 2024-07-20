#include <iostream>
#include <string>
using namespace std;

class B;  //forward declaration
class A{
	private:
	int num;
	
	public:
	A(int a){
		num=a;

	}
	void setNum(int a){
		num=a;
	}

	void show(){
		cout<<"\n private member of class is "<<num <<"\n";
	}

	float friend addTwoNumbers(A a,B b);

};

class B{
	private:
	float num;
	
	public:
	B(float v){
		num=v;

	}
	void setNum(float v){
		num=v;
	}

	void show(){
		cout<<"\n private member of class is "<<num <<"\n";
	}
	float friend addTwoNumbers(A a,B b);

};

class C{
	private:
	float num;
	
	public:
	C(float v){
		num=v;

	}
	void setNum(float v){
		num=v;
	}

	void show(){
		cout<<"\n private member of class is "<<num <<"\n";
	}


};
float addTwoNumbers(A a, B b){
		cout<<"\nI am inside friend function\n";
		return a.num+b.num;
	}


int main(){

	A objA(10);
	B objB(20.5);
	C objC(0);
	cout<<"\nCALLING A OBJECT\n";			
	objA.show();
	cout<<"\nCALLING B OBJECT\n";
	objB.show();
	float result=addTwoNumbers(objA,objB);
	cout<<"Friend function return value "<<result;

	objC.setNum(result);
	C objcc(0);
	objcc.setNum(2.0*addTwoNumbers(objA,objB)); 
	cout<<"\nCALLING C OBJECT\n";
	objC.show();	
	cout<<"\nCALLING C second OBJECT\n";
	objcc.show();	

	cout<<"\nProgram ended\n";
	return 0;

}
