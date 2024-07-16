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
    int choice;
    cout<<"Enter your choice of operation: "<<endl<<"1. Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
    while(choice!=5)
    {
    cin>>choice;
    switch(choice)
    {
        case 1:
        sum(num1,num2);    // arguments or actual parameter
        break;
        case 2:
        sub(num1, num2);
        break;
        case 3:
        mul(num1,num2);
        break;
        case 4:
        division(num1, num2);
        break;
        case 5:
        cout<<"Imma outta here, bye bye!";
        break;
    
    }
    }
    
}

/*
Why do we need user defined function?
So we can use them to perform tasks of our choice or need

Function Features
1. Reusability
2. Readability


*/





/*
pointer
for declaration - *a and passing the parameter *a
for function call &a
*/