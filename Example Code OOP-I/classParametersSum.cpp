#include <iostream>
//header file required for running c++ 
using namespace std;
class A{
	public:
		int d;
		float e;
		
	public:
		void set(int v1,float v2){
		 	d=v1;
		 	e=v2;
		 }
		int getd(){return d;}
		float gete(){return e;}
	};
	
	
int main(){
	A ob1,ob2;
	ob1.set(2,4.4);
	ob2.set(3,5.6);
	float s1,s2;
	//s1= ob1.getd()+ob1.gete();
	//s2= ob2.getd()+ob2.gete();
	s1= ob1.d + ob1.e;
	s2=ob2.d+ob2.e;
	cout<<"\nSum of ob1 data is "<<s1;
	cout<<"\nSum of ob2 data is "<<s2;
	return 0;
}
