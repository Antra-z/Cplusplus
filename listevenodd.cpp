#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<"List Elements: "<<endl;
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> even;
    
}