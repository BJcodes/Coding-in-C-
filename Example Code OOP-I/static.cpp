#include <iostream>
#include <string>
using namespace std;
extern int r;
class Student{
	private:
		static int roll_no;
		string name;
	public:
		Student(){
			roll_no++;
		}
		void start_rollno(int start){

	//		roll_no=start;

		}
		void assign_rollno(){
		//	roll_no++;

		}
		int get_rollno(){
			return roll_no;
		}
		void set_name(string str){
			name=str;		
		}
		string get_name(){
			return name;
		}
};
int Student::roll_no = 0;
int main(){
	Student std1,std2,std3;
	std1.assign_rollno();
	std1.set_name("Ali");
	std2.assign_rollno();		
	std2.set_name("Zain");
	std2.assign_rollno();	
	std3.set_name("Basit");
	std3.assign_rollno();	
	cout<<"Students records are \n";
	cout<<"\nRoll No:  "<<std1.get_rollno()<<"  Name: "<<std1.get_name();
	cout<<"\nRoll No:  "<<std2.get_rollno()<<"  Name: "<<std2.get_name();
	cout<<"\nRoll No:  "<<std3.get_rollno()<<"  Name: "<<std3.get_name();

	cout<<"\nProgram End\n";
	return 0;
	
}
