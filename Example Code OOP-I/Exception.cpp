#include <iostream> 
using namespace std; 
  
int main() 
{ 
   int x;
   cout<<"\nenter some integer value\n";
   cin>>x;
  
   // Some code 
   cout << "Before try \n"; 
   try { 
      cout << "Inside try \n"; 
      if (x < 0) 
      { 
         throw 0; 
         cout << "After throw (Never executed) \n"; 
      } 
   } 
   catch (int y) { 
      cout << "Exception Caught \n"; 
      //cout<<"\nthe value you entered "<<y<<"  is a negative, which forbidden\n";
   }

   cout<<"\nRest of code\n"; 
  /*
   cout << "After catch (Will be executed) \n"; 

   int num,denom;
   cout<<"\nEnter numerator value\n";
   cin>>num;
   cout<<"\nEnter denominator value\n";
   cin>>denom;
   float result;
  try{
        result=num/denom;
        throw denom;
	}
catch (int d){
	cout<<"\nDenominator can't be zero, try again\n";
}
*/
   return 0; 
}
