#include<iostream>
using namespace std;
int main()
{
    //Braced initialisers
    //Variable may contain random garbage value. WARNING

    int elephant_c ;
    int lion_c{} ; //initialisers to zero
    int dog_c{10}; // Initialisers to 10
    int cat_c{15}; // Initailsers to 15
    //CAn use expression as intialiser
    int pets{dog_c+cat_c};

    // int new_number{doesn't exist};
    //int narrowing_conversion{2.9}; // Compiler error

    cout<<"Elephant count  : "<<elephant_c<<endl;
    cout<<"Lion count : "<<lion_c<<endl;
    cout<<"Dog count : "<<dog_c<<endl;
    cout<<"Cat count : "<<cat_c<<endl;
    cout<<"Domesticated animal count : "<<pets<<endl;
    return 0;
}