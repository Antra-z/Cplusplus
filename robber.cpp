#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={2,1,1,2};
    int maxx=0;
    for(int i=0;i<nums.size();i++)
    {
        int sum=0;
        for(int j=i;j<nums.size();j+=2)
        {
            sum=nums[j];
        }
        maxx=max(sum,maxx);
    }
    cout<<maxx;
    
    /*int result=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2!=0)
            {
                result+=nums[i];
            }
            else
            {
                res+=nums[i];
            }
            
        }
        int final=max(result,res);
        cout<<final;*/
    }