#include<iostream>
using namespace std;
class Eg{
    mutable int value=0;
    public:
        Eg(int val) : value(val) {}       // constructor
        void modify() const {
            cout<<value<<endl;
            value++;
            cout<<value<<endl;
        }
};
int main()
{
    Eg ob(10);
    ob.modify();
}