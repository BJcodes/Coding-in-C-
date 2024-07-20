#include <iostream>
#include <string>
using namespace std;


class A{
	
	private:
		int a;
	public:
		A(){
			a=0;
		}
		A(int someValue){
			a=someValue;
		}
		void insideFunction(){
			cout<<"\nInside Function "<<a;
	}

	void square();
};

void A:: square(){
		cout<<"\nLinked Function "<<a*a;

}

int main(){

		A obj(10);
		obj.insideFunction();	
		obj.square();
		cout<<"\nEnd of Program\n";

		return 0;

}
