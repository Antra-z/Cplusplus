#include<iostream>
using namespace std;
void sum(int a,int b)   // parameters
{
    int sum=a+b;
    cout<<"Add = "<<sum<<endl;
}
void sub(int a, int b)
{
    int sub=a-b;
    cout<<"Sub = "<<sub<<endl;
}
void mul(int a, int b)
{
    int mul=a*b;
    cout<<"Multiplication = "<<mul<<endl;
}
void division(int a, int b)
{
    
    if(b==0)
    {
        cout<<"Zero division error"<<endl;
    }
    else
    {
        int div=a/b;
        cout<<"Division = "<<div<<endl;
    }
}
int main()
{
    int num1, num2;
    cin>>num1>>num2;
}
// Polymorphism  - functions in many forms
// Function Overloading - Static Polymorphism
// It is compile time polymorphism which allows the user to pass different argument to same function resulting in different
// output based on the input.
// Function Overriding - Dynamic Polymorphism
// Runtime Polymorphism, which allows the user to modify the definition of a function of a parent class in order
// to get the desired output.
// 

