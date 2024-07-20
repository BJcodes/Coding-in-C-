#include <iostream>
#include <fstream>
using namespace std;
int main(){

	//Sample Writing to A file
	#if 0
	ofstream outFile;
	outFile.open("/home/scholar/work/study/teaching/OOP/examples/test.txt",ios::out|ios::app);
	if(outFile.is_open()){
		outFile<<"Hi, This is your first test file";
		outFile<<"\n1 2 3 4 5";
	}
	else
		cout<<"Error Opening file";
	outFile.close();
	#endif

	//Sample Reading from a file
	#if 0
	ifstream inFile;
	inFile.open("/home/scholar/work/study/teaching/OOP/examples/test.txt",ios::in);
	char contents1[20];
	char contents2[20];
	char contents3[20];
	char contents4[20];
			
	if(inFile.is_open()){
		inFile>>contents1>>contents2>>contents3>>contents4;
		cout<<contents1<<"  "<<contents2<<"  "<<contents3<<"  "<<contents4;

	}
	else
		cout<<"\nNothing out";
	inFile.close();
	cout<<"\nProgram End\n";	
	#endif
	
	//reading character by character
	#if 0
	ifstream outHandler;
	outHandler.open("/home/scholar/work/study/teaching/OOP/examples/test.txt",ios::in);
	char ch;
	if(outHandler.is_open()){
		while(!outHandler.eof()){
			outHandler.get(ch);
			//outHandler>>ch;
			//skips space				
			cout<<ch;
		}
	}
	else
		cout<<"Error Opening file";
	outHandler.close();
	
	
	#endif

	int x[]={0,1,2,3};
	int temp;
	int i,j;
	i=0;
	 j=3;

	while(i<j){
		temp=x[i];
		x[i]=x[j];
		x[j]=2*temp;
		i++;	j--;
	}
for(i=0;i<4;i++){
	cout<<x[i]<<"\n";	
	}
	
	return 0;
}	
