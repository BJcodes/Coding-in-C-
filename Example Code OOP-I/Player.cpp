#include <iostream>
#include <string>
using namespace std;


class Player{
	private:
	string name;
	
	public:
	string fatherName;
	void setName(string n){
		name=n;

	}
	string getName(){
		return name;
	}


};

int main(){

	Player p1;
	string n;
	cout<<"Enter any name\n";
	cin>>n;
	
	p1.setName(n);
	string str=p1.getName();
	cout<<"Player name "<<p1.getName()<<" length is "<<str.length();
	
	cout<<"\nProgram ended\n";
	return 0;

}
