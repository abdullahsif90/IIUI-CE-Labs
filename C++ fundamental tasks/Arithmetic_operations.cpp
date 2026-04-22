// this code will ask two numbers from user and performs operations 

#include<iostream>
using namespace std;
int main(){
    double num1, num2;
    cout<<"enter the first number "<<endl;
    cin>>num1;
    cout<<"enter the second number\n ";
    cin>>num2;
    cout<<"The sum of two number is  " <<num1+num2<<endl;;
    cout<<"THe subtract is "<<num1-num2<<endl;
    cout<<"The multiplication is "<<num1*num2<<endl;
    if(num2!=0){ // if num2 not equal to zero it will perform operation other not 
    cout<<"The division of number is "<<num1/num2<<endl;}
    else{
        cout<<"division by zero is not possible "<<endl;
    }
    return 0;

}