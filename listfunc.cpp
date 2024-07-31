#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    for(int i=0;i<5;i++)
    {
        int x;
        cout<<"Enter element to the list: ";
        cin>>x;
        l.push_back(x);
    }
    cout<<"List elements: "<<endl;
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<"\nMenu \n1. Reverse the List \n2. Sort the List \n3. Unique elements in the List \n4. Empty \n5. Size \n6. Clear \n7. Merge \n8. Exit: "<<endl;
    int ch=0;
    do
    {
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                l.reverse();
                for(auto i:l)
                {
                    cout<<i<<" ";
                }
                break;
            }
            case 2:
            {
                l.sort();
                for(auto i:l)
                {
                    cout<<i<<" ";
                }
                break;
            }
            case 3:
            {
                l.unique();
                for(auto i:l)
                {
                    cout<<i<<" ";
                }
                break;
            }
            case 4:
            {
                if(l.empty())
                {
                    cout<<"list is empty"<<endl;
                }
                else
                {
                    cout<<"List is not empty!"<<endl;
                }
                break;
            }
            case 5:
            {
                cout<<"Size of the list: "<<l.size()<<endl;
                break;
            }
            case 6:
            {
                l.clear();
                cout<<"list cleared successfully"<<endl;
                break;
            }
            case 7:
            {
                list<int> l2;
                cout<<endl;
                for(int i=0;i<5;i++)
                {
                    int x;
                    cout<<"Enter elements to the 2nd list: ";
                    cin>>x;
                    l2.push_back(x);
                }
                cout<<"Second List elements: "<<endl;
                for(auto i:l2)
                {
                    cout<<i<<" ";
                }
                l.merge(l2);
                cout<<"After merging two lists: "<<endl;
                for(auto i:l)
                {
                    cout<<i<<" ";
                }
                break;
            }
            case 8:
            exit(0);
            default:
            {
                cout<<"Invalid choice";
            }
        }
        
    } while (ch<8);
    
}