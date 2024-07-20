#include <stdio.h>
struct student{
	
	char name[100];
	int rollno;
	float gpa;
};

int main(){
	
	
	struct student s;
	student s1,s2,s3;
	printf("\nEnter record for student no. 1");
	scanf("%s",&s1.name);
	printf("\nEnter Roll no: \n");
	scanf("%d",&s1.rollno);
	printf("Enter gpa:\n");
	scanf("%f",&s1.gpa);
	
	
	
	return 0;
}
