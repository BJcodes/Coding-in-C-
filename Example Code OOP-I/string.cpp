#include <iostream>
#include <iomanip>
//for setw
using namespace std;
int main()
{
const int MAX = 20;
char str[MAX];
//max characters in string
//string variable str
//cout << "\nEnter a string: ";
//cin >> setw(MAX) >> str;
//put string in str,
// no more than MAX chars
//cout << "You entered: " << str << endl;
cout << "\nEnter a string: ";
cin.get(str, MAX);
cout << "You entered: " << str << endl;
return 0;
}
