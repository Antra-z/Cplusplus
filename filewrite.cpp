#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream my_file("first.txt");
    if(!my_file)
    {
        cout<<"Error: Unable to open "<<endl;
        return 1;
    }
    my_file<<"Antra 20"<<endl;
    my_file<<"Palak 20000"<<endl;
    my_file<<"Chetna 20"<<endl;
    my_file<<"Akanksha 21"<<endl;
    my_file<<"Preetika 19"<<endl;
    my_file<<"Bhoomi 20"<<endl;
    my_file.close();
    return 0;

}