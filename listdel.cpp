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
    auto a=l.begin();
    int pos;
    cout<<"enter the position where you want to delete the element: ";
    cin>>pos;
    advance(a,pos);
    l.erase(a);          // works on indices
    cout<<"\n updated list"<<endl;
    for(auto i:l)
    {
        cout<<i<<" ";
    }

}