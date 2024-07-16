#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"The maximum of these 3 given numbers is "<<num1<<endl;
        }
        else
        {
            cout<<"The maximum of these 3 given numbers is "<<num3<<endl;
        }
    }
    else 
    {
        if(num2>num3)
        {
            cout<<"The maximum of these 3 given numbers is "<<num2<<endl;
        }
        else
        {
            cout<<"The maximum of these 3 given numbers is "<<num3<<endl;
        }
    }
}