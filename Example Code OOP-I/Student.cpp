#include <iostream>
#include <string>
using namespace std;

class StudentRecord{

	private:
		static int RollNo;
		float gpa;
	public:
		StudentRecord(){
			RollNo++;
			gpa=0.0;
		}
		//StudentRecord(int r,float g){
		//RollNo=r;gpa=g;
		//}
//	void setRollNo(int r){RollNo=r;}
	void setgpa(float g){gpa=g;}
	void RecordShow(){
		cout<<"\nRoll No "<<RollNo;
		cout<<"\nGpa is "<<gpa;

	}


};
StudentRecord :: RollNo=0;
int main(){
	StudentRecord std[3];
	//std[0].setRollNo(1);
	//std[1].setRollNo(2);
	int i;
//	for(i=0;i<=2;i++){
//		std[i].setRollNo(i+1);
//	}	

	std[0].setgpa(2.3);
	std[1].setgpa(3.4);
	std[2].setgpa(3.5);
	for(i=0;i<3;i++){
		std[i].RecordShow();
	}	


return 0;
}

