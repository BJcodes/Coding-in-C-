#include <iostream>
using namespace std;



int sum(int, int);

int sum(int a,int b){
	cout<<"\nInside function with just two values\n";
	return a+b;
}

int sub(int,int);
int sub(int x,int y){
	return x-y;
}
/*
int sum(int array[],int size){
	cout<<"\nInside function with array and size parameter\n";
	int s=0;	
	for(int i=0;i<size;i++){
		s=s+array[i];
		cout<<"\n"<<s;
	}
	return s;
}
*/
int sum(int array[4]){
	cout<<"\nInside function with only array\n";
	int s=0;	
	for(int i=0;i<4;i++){
		s=s+array[i];
		cout<<"\n"<<s;
	}
	return s;
}

int sum(int *p,int size){
	cout<<"\nInside function with pointer and size parameter\n";
	int s=0;	
	for(int i=0;i<size;i++){
		s=s+p[i];
		cout<<"\n"<<s;
	}
	return s;
}

int main(){

	int u,v;
	
	u=10;
	v=20;

	int array[]={10,20,30,40};
	int r1,r2,r3,r4;
	r1=sum(v,u);
	r2=sum(array);	
	r3=sum(array,4);
	r4=sum(array,4);
	cout<<"\nr1 "<<r1<<"\nr2 "<<r2<<"\nr3 "<<r3<<"\nr4 "<<r4;
	cout<<"\nProgram Ended\n";
	return 0;


}
