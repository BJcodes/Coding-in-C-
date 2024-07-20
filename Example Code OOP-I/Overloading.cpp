#include <iostream>
#include <string>
using namespace std;


class A{
	private:
	int x;
	int y;
	
	public:
	 A(int a,int b){
		x=a;
		y=b;

	}
	int getx(){
			return x;
	}
	int gety(){

			return y;
	}
	void show(){
		cout<<"\n( "<<x <<" , " <<y<<" )\n" ;
	}

	A operator  + (const A &obj){

			int xx,yy;
			xx=x+obj.getx();
			yy=y+obj.gety();
			A newObj(0,0);
			
	return newObj;
	}

};

int main(){
	
	A obj1 (2,3);
	A obj2 (4,5);
	obj1.show();
	obj2.show();
	A obj3 ( 0,0);
	obj3=obj1 + obj2;
	
	cout<<"\nProgram ended\n";
	return 0;

}
