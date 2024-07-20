#include <iostream>
#include <cstring>
//for strcpy()
using namespace std;
int main()
{
	char str1[] = "Tiger, tiger, burning bright\nIn the forests of the night";
	const int MAX = 80;
	//size of str2 buffer
	char str2[MAX];
	//empty string
	strcpy(str2, str1);
	cout << str2 << endl;
return 0;
}
