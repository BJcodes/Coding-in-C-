#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	
	private:
		string brand;
		double mlg;
		double avFuel;
	public:
		void create(string name,double m, double fuel){
			brand=name;
			mlg = m;
			avFuel = fuel;
		}
		void drive(double distance){
			
			if (distance/mlg <= avFuel){
				cout<<"\ndriving for "<<distance <<" kilo meters";
				avFuel -=distance/mlg;
			}
			else{
				cout<<"\nNot enough fuel, refill may be needed\n";
				
				cout<<"\nDriven only for "<<distance/mlg;
				avFuel-=distance/mlg;
			}
			
		}
		double getFuel(){return avFuel;
		}
		void honk(){
			cout<<"\nHorn sound of my vehicle\n";
		}
	
};

class Truck:private Vehicle{
	
	private:
		int noWheels;
	public:
		void honk(){
			cout<<"\nPawon Pawon";
		}
		void display(){ cout<<"\nDisplay of truck";
		}
		
};
class miniTruck:public Truck{
	
	
};
class Car: public Vehicle{
	private:
		int noWheels;
	public:
		void honk(){
			cout<<"\nPeep Peep";
		}
};
int main(){
	
	miniTruck mt;
	mt.display();
	mt.honk();
	
}
