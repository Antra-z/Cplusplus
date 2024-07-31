#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // append
    //ofstream my_file("first.txt", ios::app);
    // or can give the whole address of the file
    ofstream my_file("/Applications/File_Handling_C++/first.txt", ios::app);
    if(!my_file)
    {
        cout<<"Failed to open the file for appending."<<endl;
        return 1;
    }
    my_file<<"yeah yeah"<<endl;
    // close the file
    my_file.close();
    return 0;
}