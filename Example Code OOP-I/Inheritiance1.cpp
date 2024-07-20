#include <iostream>
using namespace std;

class A{
	private:
		int varA;
	public:
		void set(int a){varA=a;}
		int get(){return varA;}

	void show(){ cout<<"\nParent class show\n";}

};
class B: public A{

	public:
	void show(){cout<<"\nChild class show\n";}


};

int main(){

	A a;
	//a.varA=10;
	//cout<<"\nValue of the variable is "<<a.varA;
	B b;
	b.set(20);
	cout<<"\nValue of the variable is "<<b.get();
	b.show();
	a.show();
return 0;
}


