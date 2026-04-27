#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age in years "<<endl;
    cin>>age;
    if(age<0 || age>160){
        cout<<"You're lying - you CANNOT be that age"<<endl;   
    }
    else if(age >=35 && age <=80){
        cout<<"You can save money on your car insurance"<<endl;
    }
    else{
        cout<<"sorry we dont have any deal for you "<<endl;
    }
    return 0;
}