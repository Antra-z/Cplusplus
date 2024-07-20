#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,13> a={1,0,1,0,1,1,1,1,0,1,1,1};
    int sum=0;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==1 && a[i]==a[i+1])
        {
            sum++;
        }
    }
    cout<<"Number of consecutive 1s: "<<sum<<endl;
}