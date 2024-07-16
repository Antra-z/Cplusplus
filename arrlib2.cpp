#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> a={3,4,7,2,7};
    int size=a.size();
    cout<<size<<endl;
    cout<<"Original Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int c = count(a.begin(), a.end(), 7);
    if (c == 2) {
        cout << "Element 7 occurs 2 times" << endl;
    }

    return 0;
}
/*
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    // Sample array
    array<int, 10> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // Iterate through unique elements and count their occurrences
    for (int i = 0; i < arr.size(); ++i) {
        if (count(arr.begin(), arr.end(), arr[i]) > 1) {
            cout << "Element " << arr[i] << " occurs " 
                 << count(arr.begin(), arr.end(), arr[i]) << " times" << endl;
            arr[i] = INT_MIN; // Mark element as visited
        }
    }

    return 0;
}


    
    cout<<endl;
    cout<<"Element at index 3 = "<<a.at(3)<<endl;      // at function - pass the integer - returns the reference
    bool trueFalse=a.empty();                          // empty function - no parameter passing and returns bool
    cout<<"True of False = "<<trueFalse<<endl;
    bool empty=a.empty();
    cout<<"Is array empty or not = "<<empty<<endl;
    cout<<"First element = "<<a.front()<<endl;
    cout<<"Last element = "<<a.back()<<endl;
    a.front();*/







