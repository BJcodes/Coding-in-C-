#include <iostream>
#include <string>

using namespace std;
class A{
	private:
	string name;
	
	public:
	void setName(string n){
		name=n;

	}
	string getName(){
		return name;
	}
	void printName(){
		cout<<"Name is "<<name;
	}

};
class B: public A{

	public:	
	void show(){
		cout<<"This is simple show function\n";
	}
};

int main(){

	B objB;
	objB.setName("Zahoor");
	objB.printName();	
	objB.show();
	cout<<"\nProgram ended\n";
	return 0;

}
