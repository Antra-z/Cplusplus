//given array of N element, and a number value
//
//pairs(a,b)
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,4,2,3,8};
    int value=5;
    int count=0;
    // pick the first element of the pairs
    for(int i=0;i<5;i++)
    {
    // pick the second element of the pair along with a[i]
    for(int j=i+1;j<5;j++)
    {
        if(a[i]+a[j]==value)
        {
            count=count+1;
        }
    }
    }
    cout<<"The count of pairs "<<value<<" is "<<count<<endl;
    return 0;
}
/*
for(int i=1;i<=5;i++) // prints a stair format star pattern which goes from 1 to 5 star
{{
    for(int j=1;j<=5;j++)
    {
    if(i+j>5) // use if (i<=j) for top-right triangle which goes from 5 to 1 star.
        cout<<"* ";
    else
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
}


*/