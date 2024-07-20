#include <iostream>

using namespace std;

int main(){

	int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int r,c;
	/*for(r=0;r<3;r++)
	{
	for(c=0;c<4;c++)
		{
			//cout<<"  "<<r<<":"<<c;
			cout<<array[r][c]<<" ";
		}
	cout<<"\n";	
	}*/

	for(r=0;r<3;r++)
	for(c=0;c<4;c++)
	{
		cout<<"Enter value at location "<<r<<":"<<c;
		cout<<"\n";
		cin>>array[r][c];
	}	
	cout<<"\nInput array is \n";
	for(r=0;r<3;r++)
	{
	for(c=0;c<4;c++)
		{
			//cout<<"  "<<r<<":"<<c;
			cout<<array[r][c]<<" ";
		}
	cout<<"\n";	
	}

return 0;
}
