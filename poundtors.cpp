#include<iostream>
using namespace std;
int main()
{
    float currency;
    cout<<"Enter currency for conversion\n 1. for Pound to Rupees\n 2. for Rupees to Pound"<<endl;
    cin>>currency;
    float pound,rupees;
    if(currency==1)
    {
        cout<<"Enter Pound"<<endl;
        cin>>pound;
        cout<<"Entered pound = "<<(pound*106.921)<<" ruppes"<<endl;
    }
    else if(currency==2)
    {
        cout<<"Enter Rupees"<<endl;
        cin>>rupees;
        cout<<"Entered rupees = "<<(rupees*0.0094)<<" pound"<<endl;
    }
    else
    {
        cout<<"wrong program"<<endl;
    }
    return 0;
}