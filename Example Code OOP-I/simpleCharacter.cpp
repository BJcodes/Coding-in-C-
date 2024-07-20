#include <iostream>

#include <iomanip>
#include <cstring>
using namespace std;

int main(){
	/*
	const int MAX=30;
	char Address[MAX];

	cout<<"\nenter your Address";
	//cin>>setw(MAX)>>Address;
	cin.get(Address,MAX, '@');
	cout<<"\nyour address is "<<Address;
	*/
	char a[4]={'a','e','o','2'};
	cout<<"\nfirst character is "<<a[0];
	cout<<"\nlast character is "<<a[3]; 

	int i;
	for(i=0;i<4;i++)
		cout<<"\n"<<a[i];
/*
	int position;
	cout<<"\nenter the position ";
	cin>>position;
	cout<<"\nEnter character at that position\n";
	cin>>a[position];
	for(i=0;i<4;i++)
		cout<<"\n"<<a[i];
*/
        char A[3]={'1','2','3'};
	char B[2]={'a','b'};
	char C[5];
	//C=A+B;

	int k;
	for(k=0;k<3;k++){
		C[k]=A[k];

	}
cout<<"\nA array\n";
	for(k=0;k<3;k++){
		cout<<"\n"<<A[k];

	}
     cout<<"\nC array\n";
	for(k=0;k<3;k++){
		cout<<"\n"<<C[k];

	}
int counter=0;
for(k=3;k<5;k++){

	C[k]=B[counter];
	counter++;
}
cout<<"\nC array\n";
	for(k=0;k<5;k++){
		cout<<"\n"<<C[k];

	}

	string str1,str2,str3;
	str1="123";
	str2="ab";
	//strcat(str1,str2);
	//strcat(str3,str1);
	str3=str1-str2;	
	cout<<"\nString 3 is  "<<str3;
	cout<<"\nEnd of program\n";

return 0;
}
