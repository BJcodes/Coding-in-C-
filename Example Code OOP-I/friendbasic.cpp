#include <iostream>
#include <string>
using namespace std;
class B;
class A{
	private:
		int Adata;
	public:
		A(){Adata=2;}
	//int get(){return Adata;}
	friend void fsum(A a,B b);
};
class B{
	private:
		int Bdata;
	public:
		B(){Bdata=5;}

	//int get(){return Bdata;}
	friend void fsum(A a,B b);
};
void sum(A a, B b){
	int summation;
	//summation =a.get()+b.get();
	cout<<"\nSum is "<<summation;

}
void fsum(A a, B b){
	int summation=a.Adata+ b.Bdata;
	cout<<"\nSummation through friend function is "<<summation;

}
int main(){
	A a;
	B b;
	//int sum;
	//sim=Adata+Bdata;//error undefined Adata and Bdata
	//sum=a.Adata+b.Bdata; //error Adata & Bdata are private
	//sum(a,b);
	fsum(a,b);
	

return 0;
}
