#include<iostream>
using namespace std;
void sorting(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void searching(int a[],int n)
{
    int x;
    cout<<"\nEnter an element to search in the array: ";
    cin>>x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Element "<<x<<" found at index "<<i<<endl;
            flag=1;
        }
        
    }
    if(flag==0)
    {
        cout<<"Element does not exist in the Array"<<endl;
    }
    
}
int main()
{
    int a[6]={44,5,67,12,89,45};
    int n=6;
    cout<<"Original Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sorting(a,n);
    searching(a,n);
}