#include <iostream>
using namespace std;



class Simple{

	private:
	void show1(){
		cout<<"how are you 1";
	}

	public:
	void show2(){
		show1();
		cout<<"how are you 2";
	}
};

int main(){


	
	Simple obj;
		
		obj.show2();	

	return 0;
}

