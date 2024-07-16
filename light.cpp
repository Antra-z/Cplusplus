#include<iostream>
using namespace std;
int main()
{
    bool red_light (false);
    bool green_light(true);
    for(int i=0;i<10;i++)
    if(red_light==true)
    {
        cout<<"Stop!"<<endl;
    }
    else
    {
        cout<<"Go through!"<<endl;
    }
    if(green_light)
    {
        cout<<"The light is green!"<<endl;
    }
    else
    {
        cout<<"The light is Not green!"<<endl;
    }
    //sizeof()
    cout<<"sizeof(bool) : "<<sizeof(bool)<<endl;


    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;
    cout<<boolalpha;
    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;
    return 0;
}