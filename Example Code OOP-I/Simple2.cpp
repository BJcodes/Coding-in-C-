#include <iostream>
using namespace std;



class Simple{

	private:

	int a;	

	public:
	int b;
	void set_a(int v){
		a=v;
	}
	int get_a(){

		return a;
	}
	int square(){

		return a*a;
	}
};

int main(){


	
	Simple obj;
	

	int v;
	cout<<"Enter any integer\n";
	cin>>v;
	obj.set_a(v);
	cout<<"value is "<<obj.get_a()<<" square of the value is "<<obj.square();
	cout<<"\nProgram ended\n";
	return 0;
}

