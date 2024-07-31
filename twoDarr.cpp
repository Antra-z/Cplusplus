#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*int arr[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
   int n=0,m=0;
   cout<<"Enter the size of the 2d array: ";
   cin>>n>>m;
   int arr[n][m];
   cout<<"Enter the elements: "<<endl;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
   }
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }
   int sum=0;     // first row and in case want to find sum of any row then make a var then in place of 0 var-1
   for(int i=0;i<m;i++)
   {
    sum+=arr[0][i];
   }
   cout<<"Sum of first row elements: "<<sum<<endl;
   // sum of diagonal elements
   int s=0;
   int s2=0;
   if(n==m)
   {for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(i==j)
        {
            s+=arr[i][j];
        }
        if(j==n-1-i)
        {
            s2+=arr[i][j];
        }
    }
   }
   cout<<"Sum of right diagonal elements: "<<s<<endl;
   cout<<"Sum of left diagonal elements: "<<s2<<endl;
   }
   else
   {
    cout<<"Not a square matrix so no diagonal sum for you";
   }
}