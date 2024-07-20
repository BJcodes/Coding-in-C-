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
		cout<<"\ni am inside printName function\n";	
		cout<<"Name is "<<name;
	}
	
	void print2Times(){
		cout<<"\ni am inside print2Times function\n";
		cout<<"Name is "<<name;
		cout<<"\nName is "<<name;
	}
	void friend printTwoTimes(A obj);

};

void printTwoTimes(A obj){
		cout<<"\ni am inside printTwoTimes function\n";
		cout<<"Name is "<<obj.name;
		cout<<"\nName is "<<obj.name;
}
int main(){

	A objA;
	objA.setName("Khan");
	objA.printName();
	printTwoTimes(objA);
	objA.print2Times();
	cout<<"\nProgram ended\n";
	return 0;

}
