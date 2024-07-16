#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*std::string str1="Hello, World!";
    std::string str2="World!";
    std::string result=str1+str2;
    //std::cout<<"Concatenated String: "<<result<<std::endl;
    size_t found = str1.find(str2);  // size_t is an unsigned data type used to represent the size of objects 
                                    // in bytes and is the type returned by the sizeof operator.deal with the length or position of elements within the string
    if(found!=std::string::npos)   // npos constant static member and represents no position
    {
        std::cout<<"Substring found at index: "<<found<<std::endl;
    }
    else
    {
        std::cout<<"Substring not found "<<std::endl;
    }

string str = "hello World!";
string from = "World";
string to = "C++"; 
size_t start_pos = str.find(from);
if(start_pos!=string::npos)
{
    str.replace(start_pos,from.length(),to);
}
else
cout<<"String after replacement: "<<str<<endl;



string str1="Welcome to MIET";
str1.replace(3,4,"abcd");
cout<<str1<<endl;

*/
//comparison
string s1="Hello, Welcome MIET";
if(s1.compare("Hello")==0)
{
    cout<<"strings are equal"<<endl;
}
else
{
    cout<<"Strings are unequal"<<endl;
}

//substring
string s2=s1.substr(7,7);
cout<<s2<<endl;

// insert
s1.insert(15,"to ");
cout<<s1<<endl;

//erase
s1.erase(18,4);
cout<<s1<<endl;

// push_back - add character at the end
s1.push_back('-');
s1.push_back('_');
s1.push_back('-');
s1.push_back('!');
cout<<s1<<endl;

// pop_back - remove character at the end
s1.pop_back();
cout<<s1<<endl;

return 0;
}