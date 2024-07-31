#include<iostream>
using namespace std;
void eg()
{
    register int counter=0;
    for(register int i=0;i<10;i++)
    {
        counter+=i;
        cout<<counter<<" ";
    }
}
int main()
{
    eg();
}