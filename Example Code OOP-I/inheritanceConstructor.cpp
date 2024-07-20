#include <iostream>
using namespace std;
class A{
	
	public:
		A(){
			cout<<"\nconstructor of the base class A";
		}
		
};

class B: public A{
	
	public:
		B(){
			cout<<"\ncostructor of the derived class B";
		}
		
};

int main(){
	
	//B b;
	A a;
	
	return 0;
}
