#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // open a file for reading
    ifstream my_file("first.txt");
    // check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file. "<<endl;
        return 1;
    }
    // storing the contents of the file in "line" string
    string line;
    // loop until the end of the file
    while(!my_file.eof())
    {
        // store the current line of the file in the line variable
        getline(my_file, line);
        // print the line variable
        cout<<line<<endl;
    }
    my_file.close();
    return 0;
}