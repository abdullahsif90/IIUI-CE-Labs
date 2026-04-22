#include<iostream>
using namespace std;
int main(){
    double km, miles;
    cout<<"Enter the Value in kilometer "<<endl;
    cin>>km;
    miles=km*0.62;
    cout<<"the value in miles is "<<miles<<endl;
    cout <<"enter the value in miles "<<endl;
    cin>>miles;
    km=miles/0.62;
    cout<<"the value in kilometer is "<<km;
    return 0;
}