#include <iostream>
//header file required for running c++ 
using namespace std;
class A{
	private:
		int d;
		float e;
		
	public:
		A(){
			cout<<"\nI am a no argument constructor";
			d=0;
			e=0.0;
		}
		A(int v1,float v2){
			d=v1;
			e=v2;
		}
		void set(int v1,float v2){
		 	d=v1;
		 	e=v2;
		 }
		int getd(){return d;}
		float gete(){return e;}
	};
	
	
int main(){
	A ob1;
	A ob2(2,4.0);
	float s1,s2;
	s1= ob1.getd()+ob1.gete();
	s2= ob2.getd()+ob2.gete();
	cout<<"\nob1 ( "<<ob1.getd()<<" , "<<ob1.gete()<<" )\n";
	cout<<"\nSum of ob1 data is "<<s1;
	cout<<"\nob2 ( "<<ob2.getd()<<" , "<<ob2.gete()<<" )\n";
	cout<<"\nSum of ob2 data is "<<s2;
	
	int var1;
	float var2;
	cout<<"\nenter var1 value\n";
	cin>>var1;
	cout<<"\nenter var2 value\n";
	cin>>var2;
	A ob3(var1,var2);
	float s3;
	s3=ob3.getd()+ob3.gete();
	cout<<"\nob3 ( "<<ob3.getd()<<" , "<<ob3.gete()<<" )\n";
	cout<<"\nSum of ob2 data is "<<s3;
	
	return 0;
}
