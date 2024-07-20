#include <iostream>
#include <math.h>
using namespace std;

class Point{

	private:
	int x,y;

	public:
		Point(){
			x=0;
			y=0;
		}
		Point(int a,int b){
			x=a;
			y=b;
		}
		
		void setX(int a){
			x=a;
		}
		void sety(int a){
			y=a;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		void display(){
			cout<<"\np( "<<x<<" , "<<y<<" )";
		}		

float distance(Point p1,Point p2){
		float d;
		int x1,x2,y1,y2;
		x1=p1.getX();
		x2=p2.getX();
		y1=p1.getY();
		y2=p2.getY();
		
		//d = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		
		int dx,dy;
		dx = x2-x1;
		dy = y2-y1;
		d = sqrt ( pow(dx,2)+pow(dy,2));
		return d;
	}	
};


int main(){
	
	Point p1(2,3);
	Point p2(4,16);
	p1.display();
	p2.display();
	cout<<"\ndistance between the points is "<<p1.distance(p1,p2);
}

