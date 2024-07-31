#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> num;
    char ch='y';
    do{
        if(num.empty())
        {
            cout<<"List is Empty!"<<endl;
            int x;
            cout<<"Enter the element: ";
            cin>>x;
            num.push_front(x);
            cout<<"List Updated ";
            for(auto i:num)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            auto a=num.begin();
            int x;
            cout<<"Enter the position you wish to add the element: ";
            cin>>x;
            int ele;
            cout<<"Enter the element: ";
            cin>>ele;
            if(x<=num.size())
            {
                advance(a,x-1);
                num.insert(a,ele);
                cout<<endl;
            }
            else
            {
                num.push_back(ele);
            }
        for(auto i:num)
        {
            cout<<i<<" ";
        }
        }
        cout<<"\nDo you want to enter again? (y/n)";
        cin>>ch;
    }while(ch!='n');
    
    /*
    
    // inserting at a specified position
    list<int>::iterator itr=num.begin();
    ++itr;
    ++itr;
    // insert 0 at the 3rd position of list
    num.insert(itr,0);
    // display updated list
    for(auto i:num)
    {
        cout<<i<<" ";
    }*/




}