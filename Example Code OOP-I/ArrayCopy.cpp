#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int array1[]={1,2,3};
	int array2[3];

	char C1[]={'A','B','C'};
	char C2[3];

	int i;
	cout<<"\nArray1 before copy\n";
	for(i=0;i<3;i++){
		cout<<array1[i]<<" ";
	}
	cout<<"\nArray2 before copy\n";
	for(i=0;i<3;i++){
		cout<<array2[i]<<" ";
	}	
	for(i=0;i<3;i++){
		array2[i]=array1[i];	
	}
	cout<<"\nArray1 after copy\n";
	for(i=0;i<3;i++){
		cout<<array1[i]<<" ";
	}
	cout<<"\nArray2 after copy\n";
	for(i=0;i<3;i++){
		cout<<array2[i]<<" ";
	}

	cout<<"\nC1 before copy\n";
	for(i=0;i<3;i++){
		cout<<C1[i]<<" ";
	}
	cout<<"\nC2 before copy\n";
	for(i=0;i<3;i++){
		cout<<C2[i]<<" ";
	}	

	for(i=0;i<3;i++){
		C2[i]=C1[i];	
	}
	cout<<"\nC1 after copy\n";
	for(i=0;i<3;i++){
		cout<<C1[i]<<" ";
	}
	cout<<"\nC2 after copy\n";
	for(i=0;i<3;i++){
		cout<<C2[i]<<" ";
	}

	char c[]="This is a simple string copy example";
	char d[36];
	char e[36];
	for(i=0;i<strlen(c);i++)
		d[i]=c[i];
	cout<<"\nc string is \n"<<c;
	cout<<"\nd string is \n"<<d;
	strcpy(e,c);
	cout<<"\ne string is \n"<<e;
	
return 0;
}
