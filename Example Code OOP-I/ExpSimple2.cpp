#include <iostream>
using namespace std;
class ExceptionHandlerClass{

	private:
	int firstValue;
	int secondValue;
	public:	
	 ExceptionHandlerClass(int u, int v){
		cout<<"\nObject of the class created because your program has thrown an exception\n";
		cout<<" u - v "<< u <<" - "<<v <<" returns 0 -> divide by zero exception\n";
		firstValue=u;
		secondValue=v;
	}

	int getFirstValue(){
		return firstValue;
	}

	int getSecondValue(){
		return secondValue;
	}
};

int main() {
    int a, b, c;
    float d;

    cout << "Enter the value of a:";
    cin>>a;
    cout << "Enter the value of b:";
    cin>>b;
    cout << "Enter the value of c:";
    cin>>c;

    try {
        if ((a - b) != 0) {
            d = c / (a - b);
            cout << "Result is:" << d;
        } else {
            throw ExceptionHandlerClass(a,b);
        }
    } catch (ExceptionHandlerClass obj) {
        cout << "Answer is infinite because a-b is:" << obj.getFirstValue() <<" - "<<obj.getSecondValue();
    }

    return 0;
}
