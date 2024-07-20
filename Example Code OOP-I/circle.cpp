#include <iostream>

using namespace std;

class Circle{

	private:
		int radius;
		float area;
	public:
		void enterRadius(int r){
			radius=r;
		}
		void findArea(){
			area=3.142*radius*radius;
		}
		float getArea(){
			return area;
		}
};

int main(){
	Circle mycircle;
		mycircle.enterRadius(10);
		mycircle.findArea();
		cout<<"Area of the circle is "<<mycircle.getArea()<<"\n";


return 0;
}
