#include <iostream>
#include <string>
using namespace std;

class Employee{
	int salary;
	string name;
	
	public:
		Employee(int sal, string str){
			salary=sal;
			name = str;
		}
		void setSalary(int sal){
			salary = sal;
		}
		void setName(string st){
			name=st;
		}
		int getSalary(){return salary;
		}
		string getName(){return name;
		};
		void display(){
			cout<<"\nName: "<<name;
			cout<<"\nSalary: "<<salary;
		}
		void bonus (Employee emp, float p){
			cout<<"\nBonus of "<<p<<"% to be assigned to the following employee\n";
			emp.display();
			emp.setSalary(    emp.getSalary()+  emp.getSalary()*p/100 );
			cout<<"\nAfter assigning the bonus \n";
			emp.display();
		}
};
int main(){
	
	Employee emp1(1000,"Ali"),emp2(500,"Bilal");
	emp1.display();
	emp2.display();
	emp1.bonus(emp1,5);
	return 0;
}
