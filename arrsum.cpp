#include<iostream>
#include<array>
using namespace std;
int main()
{
    /*int sum=0;
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    //int a[9]={-2,1,-3,4,-1,2,1,-5,4};
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(max<sum)
        {
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<max;
*/
int a[]={5,4,-1,7,8};

    int max=INT_MIN;
    int sum=0;
    for(const int num:a )
    {
        sum=max(num,sum+num);
        max=max(max,sum);

    }
    
    /*int n;
    cin>>n;
    int b[n];    for user-defined size of the array
    
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            
        }
    }*/
}