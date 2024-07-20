#include <iostream>
//header file required for running c++ 
using namespace std;

class SimpleClass{
	private:
		int v;
		
		
	public:
		void greetings(){
		 	cout<<"\nGood Morning";
		 }
		void setValue(int s){
			v=s;
		}
		int getValue(){
			return v;
		}
		int sum(SimpleClass Object1, SimpleClass Object2){
			
			return Object1.getValue() + Object2.getValue();
		}

};


int main(){
	SimpleClass obj1,obj2;
	obj1.setValue(2);
	obj1.greetings();
	cout<<"\nobj1 value is "<<obj1.getValue();
	obj2.setValue(4);
	cout<<"\nobj2 value is "<<obj2.getValue();
	SimpleClass obj3;
	int sum = obj3.sum(obj1,obj2);
	obj3.setValue(sum);
	cout<<"\nObj3 v is "<<obj3.getValue();
	
	return 0;
}
