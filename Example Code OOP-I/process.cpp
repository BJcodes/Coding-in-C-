#include <iostream>
#include <string>

using namespace std;

class Process{

	private:
		int pid;
		string name;
		string status;
	public:

	void create(int id, string n){
		pid=id;
		name=n;
		setstatus("Newly Created");
	}

	
	void run(){
		setstatus("Running");
		int i;
		for(i=0;i<5;i++){
			cout<<"\nprocess id "<<pid <<" name " <<name;
		}

	}
	
	void stop(){

		setstatus("Stop");
	}

	void del(){
		pid=0;
		name="";
		setstatus("deleted");	
		
	}
	void setstatus(string s){
		status=s;
	}
	string showstatus(){
		string overall;
		overall="Name= "+name+"   status= "+status;
		return overall;
	}	
	
	int getpid(){

		return pid;
	}

};

int main(){


/*
	Process a,b;
	a.create(1,"Pa");
	b.create(2,"Pb");
	a.run();
	b.run();
	cout<<"\n"<<b.showstatus();
	b.stop();
	cout<<"\n"<<b.showstatus();
	int id;
	cout<<"\nEnter process number that you want to delete ";
	cin>>id;
	if(a.getpid() == id){
		a.del();
	}
	else if(b.getpid() == id){
		b.del();
	}
	else
	{
		cout<<"\nprocess with pid "<<id <<" is  not found";
	}
	
	cout<<"\n"<<a.showstatus();
	cout<<"\n"<<b.showstatus();
*/
	/*Process p;
	p.create(101,"P1");
	p.run();
	cout<<"\n"<<p.showstatus();
	p.del();
	cout<<"\n"<<p.showstatus();
	*/
	int Max=3;
	Process p[Max];
	string name;
	int i,id;
	for(i=0;i<Max;i++){

		cout<<"\nEnter process number ";
		cin>>id;
		cout<<"\nEnter process name ";
		cin>>name;
		p[i].create(id,name);
	}
	
	for(i=0;i<Max;i++)
		cout<<"\n"<<p[i].showstatus();
	
	int n;
	cout<<"\nenter process number you want to start\n";
	cin>>n;

	for(i=0;i<Max;i++){

		if(n == p[i].getpid())
			break;
	}

	if(i==6){
		cout<<"\nprocess with pid "<<n<<" not found";
	}
	else{
		p[i].run();

	}

	
	return 0;

}
