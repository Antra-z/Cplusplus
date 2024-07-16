/*
Ram and Mohan are two brothers. They are not good in maths. So their father decided to give some assignment as a game so that they can enjoy as well as they can learn the concept of number systems. So he gave two numbers to them. One is the sum of two numbers, x and y, and another is the product of same two numbers. Help them to write a code to find x and y. 
Note: 
The two numbers should be printed in ascending order. 
Input format: 
The input contains two integers in the same line separated by space, that denotes the sum of x and y and the product of x and y, respectively. 
Output format: 
The output consists of two numbers separated by space which corresponds to x and y in ascending order. 
Sample Input 1: 
5 6 
Sample Output 1: 
2 3 
Sample Input 2: 
15 50 
Sample Output 2: 
5 10  
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    //int s=x*x-4*y;
    //cout<<s<<endl;
    //int a=(x+sqrt(s))/2;
    //int b=(x-sqrt(s))/2;

    int a=(x+sqrt(x*x-4*y))/2;
    int b=(x-sqrt(x*x-4*y))/2;
    cout<<a<<" "<<b;
}











/*

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum, product;
    cin >> sum >> product;
    
    // Calculating the discriminant
    int discriminant = sum * sum - 4 * product;
    
    if(discriminant < 0) {
        cout << "No real solutions exist." << endl;
        return 1;
    }
    
    // Calculating the two numbers using the quadratic formula
    int x1 = (sum + sqrt(discriminant)) / 2;
    int x2 = (sum - sqrt(discriminant)) / 2;
    
    // Ensuring the numbers are in ascending order
    if(x1 > x2) {
        swap(x1, x2);
    }
    
    cout << x1 << " " << x2 << endl;
    
    return 0;
}




*/