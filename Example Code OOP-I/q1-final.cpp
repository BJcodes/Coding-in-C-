#include <iostream>
using namespace std;
class A {
private:
    int a;
public:
    A() {
	     cout<<"no argument constructor of A\n";
	     a=10; }
    A(int x){
	a=x;
	cout<<"one argument constructor\n";}
    friend class B;     
};
class B {
	public:
	B(){
		A newobject;
	}
	 void show(A obj){
		cout<<"Value is "<<obj.a<<"\n";
	}
};
int main() {
   A obj1,obj2(10);
   B b;
   b.show(obj1); 
   b.show(obj2);
   return 0;
}
