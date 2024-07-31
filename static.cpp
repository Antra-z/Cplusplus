#include<iostream>
using namespace std;
// static int global
void eg()
{
    static int count=0;
    count++;
    cout<<"Count: "<<count<<endl;
}
int main()
{
    eg();
    eg();
}
/*



*/