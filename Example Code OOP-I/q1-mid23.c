#include <stdio.h>
   int main(){
	
	int i,j,k,z;
	for(i=0;i<2;i++)
	for(j=0;j<i;j++)
	for(k=0;k<3;k++)
		printf("\n%d\t%d\t%d",i,j,k);
	return 0;
   }

