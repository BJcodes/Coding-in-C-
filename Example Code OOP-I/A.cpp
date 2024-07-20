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

int main(){

	A objA;
	int v,u;
	v=100;
	u=0;
	cout<<"\nResult is "<<v/u;
	objA.setName("Khan");
	objA.printName();
	cout<<"\nProgram ended\n";
	return 0;

}
