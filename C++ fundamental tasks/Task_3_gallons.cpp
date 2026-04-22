// this is th example of converting gallons into cubic feet

#include <iostream>
using namespace std;
int main (){
   double gallons;
   cout<<"Enter the number of gallons "<<endl;
   cin>>gallons;
   double cubic_feet = gallons / 7.48052;
   cout<<"The Number of cubic feet is "<<cubic_feet<<endl;
   return 0;
}