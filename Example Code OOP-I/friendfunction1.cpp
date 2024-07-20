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
		cout<<"\nName is "<<name;
	}

	//string friend addToName(A a,string m);
	A friend addToName(A a,string m);
	void friend addToName(A *a,string m);

};


A addToName(A a, string m){
		cout<<"\nI am inside friend function1\n";
		cout<<"\nName in object is "<<a.name<<"\n";
		a.name=a.name+m;
		cout<<"\nagain Name in object is "<<a.name<<"\n";
		return a;
	}

void addToName (A *a, string m){
		cout<<"\nI am inside friend function2\n";
		cout<<"\nName in object is "<<a->name<<"\n";
		a->name=a->name+m;
		cout<<"\nagain Name in object is "<<a->name<<"\n";

}

int main(){

	A objA;
	objA.setName("Aslam ");
	objA.printName();
	cout<<"\ncalling friend function 1\n";
	objA=addToName(objA, " Khan");
	objA.printName();
	cout<<"\ncalling friend function 2\n";	
	addToName(&objA, " Khan");
	objA.printName();

	cout<<"\nProgram ended\n";
	return 0;

}
