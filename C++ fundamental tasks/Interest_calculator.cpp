#include<iostream> 
using namespace std;

int main(){
    int principal;
    double rate,time, interest_calculator;
    cout<<"enter the principal amount "<<endl;
    cin>>principal;
    cout<<"enter the time in year "<<endl;
    cin>>time;
    cout<<"enter the interest rate in percentage "<<endl;
    cin>>rate;
    interest_calculator=(principal*rate*time)/100;
    cout<<"the interest is "<<interest_calculator<<endl;


    return 0;
}