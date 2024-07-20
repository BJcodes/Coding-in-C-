#include <iostream>
#include <string>
using namespace std;


class beta;
class alpha
{
	private:
	int data;
	public:
	//alpha() : data(3) { }
	alpha(){
		data=3;
	}
	//no-arg constructor
	friend int frifunc(alpha, beta); //friend function
};
////////////////////////////////////////////////////////////////
class beta
{
	private:
	int data;
	public:
	beta() : data(7) { }
	//no-arg constructor
	friend int frifunc(alpha, beta); //friend function
};
////////////////////////////////////////////////////////////////
int frifunc(alpha a, beta b)
	//function definition
	{
		return( a.data + b.data );
	}
//--------------------------------------------------------------
int main()
{
	alpha aa;
	beta bb;
	cout << frifunc(aa, bb) << endl;
	return 0;
}
