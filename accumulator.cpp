#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> numbers={1,2,3,4,5};
    // using accumulate with a lambda to sum up the elements
    /*int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total, int n)
    {
        return total+n;
    });*/
    int sum=0;
    /*int total=0;
    for_each(numbers.begin(),numbers.end(),[&total](int n)
    {
        total+=n; 
    });*/
    for(int i:numbers)
    {
        sum+=i;
    }
    cout<<"Sum: "<<sum<<endl;
}