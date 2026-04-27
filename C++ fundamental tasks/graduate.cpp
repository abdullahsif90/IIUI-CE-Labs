#include<iostream>
using namespace std;
int main(){
    int year;
    float gpa;
    cout<<"enter the year of study "<<endl;
    cin>>year;
    cout<<"enter the gpa "<<endl;
    cin>>gpa;
    if(year>=4 && gpa>=2.5){
        cout<<"you are graduated "<<endl;
    }
    else {
        cout<<"you are not graduated "<<endl;
    }
    return 0;
}