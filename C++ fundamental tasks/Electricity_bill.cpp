#include<iostream>
using namespace std;
int main(){
    double units, bill;
    cout<<"enter the number of units"<<endl;
    cin>>units;
    if(units<=100){
      cout<<"bill is "<<units*5<<endl;}
      else if (units>100 && units <=200){
        cout<<"bill is "<<(100*5)+(units-100)*8<<endl;

      }
      else {
        cout<<"bill is "<<(100*5)+(100*8)+(units-200)*12<<endl;
      }
    return 0;
}