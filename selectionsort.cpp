#include<iostream>
using namespace std;
void selectionsort(int arr[],int x)
{
    for(int i=0;i<x-1;i++) 
    { 
    int z=i;    
    for(int j=i+1;j<x;++j)
    {
        if(arr[j]<arr[z])
        {
            z=j;
        }
    }
    swap(arr[i],arr[z]);
    }
    cout<<"\nSorted Array"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[5]={7,8,3,1,2};
    int n=5;
    cout<<"Original Sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    selectionsort(a,n);

}