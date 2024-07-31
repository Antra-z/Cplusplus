#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> num;
    num.push_front(7);       // adds at the front
    num.push_front(6);
    num.push_front(5);
    num.push_back(8);         // adds at the back
    num.push_back(9);
    num.push_front(3);
    num.push_front(2);
    num.push_front(1);
    cout<<"Size: "<<num.size();
    // inserting in the middle
    auto x=num.begin(); 
    advance(x,3);         // moves the specified steps forward
    num.insert(x,4);
    // accessing front and back elements using functions
    cout<<"\nFirst element: "<<num.front()<<" and Last element: "<<num.back()<<endl;
    cout<<"Size: "<<num.size()<<endl;
    for(auto i:num)
    {
        cout<<i<<" ";
    }
    num.pop_back();        // removes the last element
    num.pop_front();        // removes the first element
    int z;
    cout<<"\nEnter the element to delete: ";
    cin>>z;
    for(auto i:num)
    {   
        if(z==i)
        {
            num.remove(z);
        }
        else
        {
            cout<<"Number is not in the list"<<endl;
            break;
        }
    }
    num.remove(5);         // removes the specified element
    cout<<endl;
    for(auto i:num)
    {
        cout<<i<<" ";
    }
    // accessing front and back elements using functions
    cout<<"\nFirst element: "<<num.front()<<" and Last element: "<<num.back()<<endl;
    list<int> nums;
    nums.push_front(11);
    nums.push_front(10);
    nums.push_front(9);
    num.merge(nums);         // the list in the merge() is added to the list before the merge function
    cout<<"Merged List: ";     // after merging all the elements are combined in the first list
    for(auto i:num)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Merged List1: ";    // after merging the 2 lists the 2nd one became empty so this loop does not print anything
    for(auto i :nums)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // iterating list using iterator
    list<int>::iterator itr=num.begin();
    //++itr;
    //cout<<"2nd element : "<<*itr<<endl;
    cout<<endl;
    //  instead of iterating again and again used loop 
    for(auto i=0;i<num.size();i++)
    {
        if(i%2!=0)        // this is just to print the odd indices to print all the elements remove it
        {
        cout<<i<<" Element: "<<*itr<<endl;
        ++itr;
        }
    }
}