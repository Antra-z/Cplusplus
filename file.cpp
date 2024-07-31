#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // opening a text file for writing you can use open() to open file.
    ofstream my_file("first.txt");    // creates the file in case there is none existent else creates the file object
    // close the file
    //my_file.close();   // done to ensure data 
    //return 0;

     /*
    METHODS TO CHECK ERRORS IN A FILE

    METHOD 1
        if(!my_file)
    {
        cout<<"Error opening the file."<<endl;
        //terminate the main() function
        return 0;
    }

    METHOD 2
    if(!my_file.is_open())
    {
        cout<<"Error opening the file."<<endl;
        //terminate the main() function
        return 0;
    }
    
    */

    // in file handling, it's important to ensure the file was opened 
    // 2. 
    // is_open() function returns 
    // true - if file opened successfully
    // false - if file failed to open or if it's in a state of error.
    // 3.
    // fail() function returns 
    // false - if file opened successfully
    // true - if file failed to open or if it's in a state of error.

    // METHOD 3
    if(!my_file.fail())
    {
        cout<<"Error opening the file."<<endl;
        return 1;
    }
    // Read from a file
    
}