#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream my_file("first.txt");
    if(!my_file)
    {
        cout<<"Error: Unable to open the file. "<<endl;
        return 1;
    }
    string line;
    int count=0;
    while(getline(my_file, line))
    {
        string word="";
        for(auto i:line)
        {
            if(i==' ')
            {
                count++;
                cout<<word<<endl;
                word="";
            }
            else
            {
                word+=i;
            }
        }
    }
    cout<<"Word count: "<<count;
}