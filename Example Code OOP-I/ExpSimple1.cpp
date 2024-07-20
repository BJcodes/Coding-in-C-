#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    float d;

    cout << "Enter the value of a:";
    cin>>a;
    cout << "Enter the value of b:";
    cin>>b;
    cout << "Enter the value of c:";
    cin>>c;

 /*   try{
    d=a/b;
    cout<<"\nout put is "<<d;
    throw();
    }
    catch(){
	cout<<"\nunwanted divided by zero exception, plz correct\n";
      }
*/		

    try {
        if ((a - b) != 0) {
            d = c / (a - b);
            cout << "Result is:" << d;
        } else {
            throw (a - b);
        }
    } catch (int i) {
        cout << "Answer is infinite because a-b is:" << i;
    }
cout<<"\nrest of the program\n";
 
    return 0;
}
