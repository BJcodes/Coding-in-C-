#include <iostream>

#include <math.h>
using namespace std;

class Point{

	private:
		float x;
		float y;
	public:
		Point(float a, float b){   //two arg constructor

			//just for checking
			cout<<"Two argument constructor called\n";
			x=a;
			y=b;
			cout<<"\nValues initialized\n";
		}
		void setx(float v){       //Setters functions 
			x=v;
		}

		void sety(float v){      //getter functions
			y=v;
		}
		float getx(){
			return x;
		}

		float gety(){
			return y;
		}

		void showPoint(){
			//cout<<"point shown on next line\n";
			cout<<"\n( "<<x<<" , "<<y<<" )\n";
			//cout<<"\n";
		}


		float Distance(Point p1, Point p2){

			float d;
			float x1,x2,y1,y2; //simple variables
			x1=p1.getx(); //fill x-values
			x2=p2.getx();

			y1=p1.gety(); //fill y-values
			y2=p2.gety();

			//now you can apply the distance formula



			d=sqrt( (x2-x1)*(x2-x1)  +   (y2-y1)*(y2-y1)  );
			
			p1.showPoint();
			p2.showPoint();
			cout<< "\nDistance is "<< d;
			//if you want to use it inside MAIN function. then need a return
		cout<<"\nDistance function ended\n";
		return d;			
		}
};


int main(){

	Point p1(1,1);  //you can also write Point p1(1,1) , p2(4,1) , p3(3,3);
	Point p2(4,1);
	Point p3(3,3); 


	float d1,d2,d3,dn;
//you can also call a function with scope of class
//for example

	//dn=Point::Distance(p1,p2); //we will try
	d1=p1.Distance(p1,p2);
	d2=p2.Distance(p2,p3);
	d3=p3.Distance(p3,p1);
	float parameter;
	parameter = d1+d2+d3;
	cout<<"\nparameter of the triangle is "<<parameter;

	return 0;
/*
	//now i want to create objects of the class
	//What is the syntax for object creation????
	//You have created two objects, initialized with 0,0 (origin)
	//BETTER SAVE YOUR PROGRAM
	//Point p1(0.0,0.0);
	//Point p2(0.0,0.0);
	//Not a garbage value.

	//p1.showPoint();
	//the initial value have been shown. 


	//Create an object and see its effect
	Point p1(0.0,0.0);
	//crate another object
	Point p2(0.0,0.0);

	//lets check
	p1.showPoint();
	//lets check second object
	p2.showPoint();

	//now lets move the points from origin
	//to other position


	//moving p1 to (2,2)

	p1.setx(2);
	p1.sety(2);

	//lets check
	//p1.showPoint();

	//lets move p2 from origin to (5,4)
	p2.setx(5);
	p2.sety(4);
	//lets check
	//p2.showPoint();
	
	

	//HOW TO FIND THE DISTANCE BETWEEN P1 and P2
	p1.Distance(p1,p2); //
	//cout<<"checking square root function "<<sqrt(16);
	
//for example
	float d;
	d=p2.Distance(p1,p2);
	cout<<"Distance inside main is "<<d;
*/
	return 0;
}
