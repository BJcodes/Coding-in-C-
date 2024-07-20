#include <iostream>
using namespace std;

class Distance{

	private:
		int ft;
		int inches;
	public:
		Distance():ft(-1),inches(-1){
		}
		Distance(int f,int in):ft(f),inches(in)
		{
		}
		void setFt(int f){ft=f;}
		void setInch(int i){
		inches=i;
		}
		int getFt(){
		 return ft;
		}
		int getInch(){
		return inches;
		}
		void show(){
			cout<<ft<<"'"<< "  "<<inches<<"\""<<"\n";
		}
		void add_dist(Distance,Distance); //declaration	
};

void Distance::add_dist(Distance a,Distance b){
	ft=a.getFt() + b.getFt();
	inches=a.getInch() + b.getInch();
}

Distance add_dist(Distance a,Distance b){
	Distance d;
	int f,in;
	f=a.getFt() + b.getFt();
	in=a.getInch() + b.getInch();
	d.setFt(f);
	d.setInch(in);
	return d;
}
int main(){
	Distance obj1(2,4),obj2(3,5),obj3;
	obj1.show();
	obj2.show();
	obj3.show();
	int f,in;
	//f=obj1.getFt()+obj2.getFt();
	//in=obj1.getInch()+obj2.getInch();
	//obj3.setFt(f);
	//obj3.setInch(in);
	//obj3.add_dist(obj1,obj2);
	obj3=add_dist(obj1,obj2);
	obj3.show();

return 0;
}

