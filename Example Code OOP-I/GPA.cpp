#include <iostream>

using namespace std;

int main(){

	int Marks[]={84,67,66,78,90,56};
	int CreditHours[]={3,4,2,3,4,4};
	float Value[]={3.9,2.8,3.8,4.0,2.6,2.5};
	int i;
/*
	for(i=0;i<6;i++){
		cout<<"Enter Marks for subject # "<<i<<"  ";
		cin>>Marks[i];
		cout<<"\nEnter Credit hours ";
		cin>>CreditHours[i];	
		cout<<"\nEnter value ";
		cin>>Value[i];
	}
*/
	cout<<"Marks"<<"\t"<<"Credit hours"<<"\t"<<"Value";
	for(i=0;i<6;i++){
		cout<<"\n"<<Marks[i]<<"\t"<<CreditHours[i]<<"\t\t"<<Value[i];
	}
	float sum=0.0;
	for(i=0;i<6;i++){

		sum=sum+CreditHours[i]*Value[i];
	}
	int totalCredits=0;
	for(i=0;i<6;i++){
		totalCredits=totalCredits+CreditHours[i];
	}
	float GPA=sum/totalCredits;
	
	cout<<"\ntSum of Product "<<sum<<"\ntotal credit hours  "<<totalCredits<<"\nGPA is "<<GPA<<"\n";
	return 0;
}
