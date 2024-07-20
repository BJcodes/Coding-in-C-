#include <iostream>
//header file required for running c++ 
using namespace std;

class Circle{
	private:
		int radius;
		
		
	public:
		void setRadius(int r){
		 	radius = r;
		 }
		void area(){
			float Ar;
			Ar= 3.142*radius*radius;
			cout<<"\nArea is "<<Ar;
		}
		

};


int main(){
	Circle c1,c2;
	c1.setRadius(10);
	c2.setRadius(2);
	c1.area();
	c2.area();
	return 0;
}
