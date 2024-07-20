#include <iostream>

using namespace std;
class B;
class A{
	private:
		int var_a;
	public:
		void set(int value){
			var_a=value;
		}
		
		int get(){
			return var_a;
		}
	friend int sum(A,B);	
};

class B{
	private:
		int var_b;
	public:
		void set(int value){
			var_b=value;
		}
		
		int get(){
			return var_b;
		}
	friend int sum(A,B);
		
};

int sum(A a, B b){

	return a.get()+b.get();
}

int main(){
		
	A obja;
	B objb;
	obja.set(2);
	objb.set(3);
	cout<<"\nSummation of the data of both objects are "<<sum(obja,objb);
	cout<<"\nProgram End\n";	
	return 0;
	
}
