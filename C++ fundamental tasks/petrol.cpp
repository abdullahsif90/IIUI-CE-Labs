// this code will ask price of petrol and average of vehicle and then ask the distance and then calculate total oil price and print it 
#include<iostream> 
using namespace std;

int main(){
    float petrol_price, average, distance;
    cout<<"Enter the petrol price "<<endl;
    cin>>petrol_price;
    cout<<"enter the oil average of vehicle "<<endl;
    cin>>average;
    cout<<"enter the distance you want to travel "<<endl;
    cin>>distance;
    float total_petrol_consumed= distance/average;
    float total_price= total_petrol_consumed*petrol_price;
    cout<<"the total petrol price for your trip is "<<total_price<<endl;
    cout<<"the total petrol consumed for your trip is "<<total_petrol_consumed<<" liters "<<endl;
    return 0;
}