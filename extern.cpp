#include<iostream>
#include"externfile.cpp"    // address of the file where global variable - var is declared or just that file name
using namespace std;
extern int var;
void eg()
{
    var++;
}
int main()
{
    eg();
    cout<<var<<endl;
}