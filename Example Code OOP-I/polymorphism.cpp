#include <iostream>

using namespace std;

class A{
	protected:
		int var;
	public:
		A(){
			var=1;
		}
		void set_var(int value_a){
			var=value_a;
		}
		void print_var(){
		//virtual void print_var(){
			cout<<"\nParent Class var= "<<var;
		}
};

class B:public A{
	public:
		void print_var(){
			cout<<"\nChild class B var= "<<var;
		}
};

class C:public A{
	public:
		void print_var(){
			cout<<"\nChild class C var= "<<var;
		}
};

int main(){
	A *ptr;
	B b;
	C c;
	ptr->set_var(100);
	ptr->print_var();
	b.set_var(2);
	c.set_var(3);
	ptr=&b;
	ptr->print_var();
	ptr=&c;
	ptr->print_var();
	cout<<"\nBase classes print";
	b.print_var();
	c.print_var();	
	cout<<"\nProgram End\n";
	return 0;
	
}
