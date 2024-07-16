#include<iostream>
#include<array>
using namespace std;
int main()
{
    //normal array
    int b[]={};

    //STL array
    array<int,4> a={3,4,2,7};
    // array<string,4> a={"A","B","C","D"};
    //array<char,4> a={'A','B','C','D'};
    int size=a.size();
    cout<<size<<endl;
    cout<<"Original Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted Array: ";
    sort(a.begin(),a.end());
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.front()<<" "<<a.back();
    a.fill(0);
    cout<<endl;
    cout<<"Filling Array with 0: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    
}