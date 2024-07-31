#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={10,7,8,9,1,5};
    //using sort from stl to sort the array
    sort(arr.begin(),arr.end(),greater<int>());       // or can use reverse after sorting it in ascending order
    cout<<"\nSorted Array: ";
    for(int num:arr)
    {
        cout<<num<<" ";
    }
}