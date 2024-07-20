#include <iostream>


/*
84 3.9 83 3.8 82 3.7 81 3.6 80 3.5 79 3.4 78 3.4
*/
using namespace std;

class GPACalculator{

	private:

		int Marks[6];
		int CreditHours[6];
		float Value[6];
		float GP[6];

	public:

	void setMarks(){
		int i=0;
		for(i=0;i<6;i++){
			cout<<"\nEnter marks for subject# "<<i+1<<"   ";
			cin>>Marks[i];
		}
	}

	void setCreditHours(){
		int i=0;
		for(i=0;i<6;i++){
			cout<<"\nEnter credit hours for subject# "<<i+1<<"   ";
			cin>>CreditHours[i];
		}
	}
	
	void setValue(){
		int i=0;
		for(i=0;i<6;i++){
			cout<<"\nEnter value for marks  "<<Marks[i]<<"  ";
			cin>>Value[i];
		}
	}

	void setGP(){
		int i=0;
		for(i=0;i<6;i++){
			GP[i]=CreditHours[i]*Value[i];
		}
	}

	float GPA(){
			
			int totalCreditHours=0.0;
			int i;
			float totalGP=0.0;
			for(i=0;i<6;i++)
				totalGP=totalGP+GP[i];
			for(i=0;i<6;i++)
				totalCreditHours=totalCreditHours+CreditHours[i];

			float gpa;
			gpa=totalGP/totalCreditHours;
		return gpa;
	}
};



int main(){
	GPACalculator std1,std2;
	std1.setMarks();
	std1.setCreditHours();
	std1.setValue();
	std1.setGP();
	cout<<"\nGPA OF THE STUDENT IS "<<std1.GPA();
	cout<<"\nProgram Ended\n";
	return 0;
}
