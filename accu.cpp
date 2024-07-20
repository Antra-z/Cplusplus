#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<string> words={"Hello", "world", "from", "C++"};
    // using accumulator with a lambda to concatenate strings
    string result=accumulate(words.begin(), words.end(),string(""),[](const string& total, const string& word)
    {
        return total+(total.empty()? " ":" ")+word;
    });
    cout<<"Concatenated string: "<<result<<endl;
}