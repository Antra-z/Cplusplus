#include<iostream>
#include"/Applications/JPRACAVA/myheader.h"
using namespace std;
void Demo::input()
{
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
}
void Demo::show()
{
    cout<<a<<" "<<b;
}
int main()
{
    /*Hmm ob;
    cout<<"add function = "<<ob.add(10,20)<<endl;
    cout<<"sun function = "<<ob.sub(10,0)<<endl;
    cout<<"sun function = "<<ob.mul(10,0)<<endl;
    cout<<"sun function = "<<ob.divide(10,5)<<endl;*/
    Demo ob;
    ob.input();
    ob.show();
}