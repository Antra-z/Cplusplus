/*
Car Parking
Count of Cars, Bikes and Rikshaw Parked
*/
#include<iostream>
using namespace std;
int main()
{
    int car_count=0;
    int bike_count=0;
    int rikshaw_count=0;
    int choice;
    char b;
    do{
        cout<<"\nCar Parking: "<<endl;
        cout<<"1. Park Car \n2. Park Bike \n3. Park Rikshaw"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            car_count+=1;
            break;
            case 2:
            bike_count+=1;
            break;
            case 3:
            rikshaw_count+=1;
            break;
        }
        cout<<"Do you want to go again (Y/N): ";
        cin>>b;
        cout<<endl;

    }while(b=='Y');
    cout<<"Car Count: "<<car_count<<endl;
    cout<<"Bike Count: "<<bike_count<<endl;
    cout<<"Rikshaw Count: "<<rikshaw_count<<endl;
    
}