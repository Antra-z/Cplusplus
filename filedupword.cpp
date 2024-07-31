#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream my_file("first.txt");
    if(!my_file)
    {
        cout<<"Error in opening the file."<<endl;
    }
    string line;
    while(getline(my_file, line))
    {
        string dup="";
        for(auto i:line)
        {
            if()
        }   
    }
}