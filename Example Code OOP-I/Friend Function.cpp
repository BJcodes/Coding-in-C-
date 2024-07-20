#include <iostream>

using namespace std;
class B;
class A
{
private:
    int a;
public:
    void set()
    {
	cout<<"Enter any value:   ";
        cin>>a;
    }
    int get()
    {
        return a;
    }
    friend int sum (A,B);
};
class B
{
private:
    int b;
public:
    void set()
    {
	cout<<"\nEnter any value:   ";
        cin>>b;
    }
    int get()
    {
        return b;
    }
    friend int sum (A,B);
};
int sum (A objA, B objB)
{
    int s;
    s = objA.get() + objB.get();
    return s;
}
int main()
{
    A obj1;
    B obj2;
    obj1.set();
    obj2.set();
    int result;
    result = sum(obj1, obj2);
    cout<< "\nSummation of the data from both objects are "<<result;	
    cout<<"\n*****************Program End*****************\n";
    return 0;
}
