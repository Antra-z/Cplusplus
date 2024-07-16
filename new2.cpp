#include<iostream>
using namespace std;
int main()
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);
    // int bad_initialisation(doesnt_exist3 + doesnt_exist4);

    //Information lost. less safe than braced initialisers
    int narrowing_coversion_functional(2.9);

    cout<<"Apple count : "<<apple_count<<endl;
    cout<<"Orange count : "<<orange_count<<endl;
    cout<<"Fruit count : "<<fruit_count<<endl;
    cout<<"narrowing coversion : "<<narrowing_coversion_functional<<endl; //will loose info
    return 0;
}