#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"enter Your grade in programming course "<<endl;
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Excellent "<<endl; break;
        case 'B':
        cout<<"Good "<<endl;break;
        case'C':
        cout<<"It is satisfactory "<<endl;break;
        case'D':
        cout<<"You just passed "<<endl;break;
        case 'F':
        cout<<"You failed better luck next time "<<endl;break;
        default:
        cout<<"Invalid grade , enter A,B,C,D,F only "<<endl;
    }
    return 0;
}