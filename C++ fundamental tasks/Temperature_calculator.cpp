#include <iostream>
using namespace std;
int main (){
    double celsius , farenhite;
    cout<<"enter the value in farenhite "<<endl;
    cin>>farenhite;
    celsius=(farenhite-32)*5/9;
    cout<<"the value in celsius is "<<celsius<<endl;
    cout<<"Enter the value in celsius"<<endl;
    cin>>celsius;
    farenhite=32+(celsius*9/5);
    cout<<"the value in farenhite is "<<farenhite;
    return 0;
}