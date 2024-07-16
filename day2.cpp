#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<"Before Swapping: a= "<<a<<" and b= "<<b;
    //a=a+b;
    //b=a-b;
    //a=a-b;
    //a=(a+b)-(b=a);
    a=(a^b)^(b=a);
    cout<<"\nAfter Swapping: a= "<<a<<" b= "<<b;
    // a=a^b;
    // b=a^b;
    // a=a^b;



}