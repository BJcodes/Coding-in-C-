#include <iostream>

using namespace std;

class A{
	
	public:
		virtual void show(){
			cout<<"\nParent Class";
		}
};

class B:public A{
	public:
		void show(){
			cout<<"\nChild class B";
		}
};

class C:public A{
	public:
		void show(){
			cout<<"\nChild class C";
		}
};

int main(){
	A *ptr;
	B b;
	C c;
	ptr->show();
	ptr=&b;
	ptr->show();
	ptr=&c;
	ptr->show();
	cout<<"\nProgram End\n";
	return 0;
	
}
