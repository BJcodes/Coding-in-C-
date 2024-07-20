#include <iostream>
#include <string.h>
using namespace std;

class functionOverloading{
	
	public:
	void f1(){
		cout<<"\nf1 with no parameters";
	}	

	void f1(int a){
		cout<<"\nf1 with one parameter i.e "<<a;
	}
	void f1(int a, int b){
		cout<<"\nf1 with two parameters i.e "<<a <<" and "<<b;
	}
	void f1(int a,float b){
		
		cout<<"\nf1 with two parameters i.e "<<a <<" and "<<b;
	}
};
int main(){
	string var;
	cout <<"\ndefault float value "<<var;
	return 0;
	functionOverloading obj1,obj2;
	obj1.f1();
	obj1.f1(10);
	obj1.f1(10,20);
	
	return 0;
}
