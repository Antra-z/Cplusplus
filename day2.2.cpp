#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter 1st number: ";
   cin>>a;
   cout<<"Enter 2nd number: ";
   cin>>b;
   cout<<"Sum = "<<(a+b)<<endl;

    int c=15;
    int d=017;
    int e=0x0F;
    int f=0b00001111;
    cout<<"C : "<<c<<endl;
    cout<<"D : "<<d<<endl;
    cout<<"E : "<<e<<endl;
    cout<<"F : "<<f<<endl;


    return  0;
}
/*
 //compile time error
    cout<<"hello"<<var<<endl;
    //run time error
    int value=7/0;
    cout<<"value"<<value;

    int a,b;
   cout<<"Enter 1st number: ";
   cin>>a;
   cout<<"Enter 2nd number: ";
   cin>>b;
   cout<<"Sum = "<<(a+b)<<endl;
*/