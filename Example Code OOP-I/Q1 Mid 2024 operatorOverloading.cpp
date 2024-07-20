#include <iostream>

using namespace std;

class A{

	private:
		int a;
	public:
	A(){
		a=0;
		cout<<"\n no arg constructor\n";
	}
	A(int v){
		a=v;
		cout<<"\n one arg constructor\n";
	}
	void set(int v){
		a=v;
	}
	int get(){return a;}
	void operator ++(){
		cout<<"\nI am inside overload function\n";
		a=a+10;
	}
	
	A operator +(A &obj){

		A ob;
		cout<<"\nthis operator value "<<this->a;
		ob.a=this->a+obj.a;
		return ob;
	}

	void show(){
		cout<<"\na is "<<a;
	}
};

int main(){
	A obj1,obj2,obj3;
	obj1.set(10);
	obj2.set(20);
	obj3=obj1+obj2;
	++obj3;
	cout<<"\nobj3 is "<<obj3.get();
	A obj4(5);
	obj4=obj1+obj2;
	cout<<"\nobj4 is "<<obj4.get();
return 0;
}
