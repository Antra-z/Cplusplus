#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class subCustomer {
    int customer_ID;
    string Name;
    int Age;
    char BirthPreferece;
    char Gender;
};
class Customer{
    int PNR;
    int totalPassenger;
    unordered_map<int,vector<subCustomer> >;
    public:
        Customer(int pnr,int tp): PNR(pnr),totalPassenger(tp){
            
            for(int i=0;i<totalPassenger;i++){
                class subCustomer {
                int customer_ID=2;
                string Name="ds";
                int Age=2;
                char BirthPreferece='e';
                char Gender='f';
                subCustomer p(customer_ID,Name,Age,BirthPerferece,Gender);
                unordered_map[PNR].push_back(p);
                }
            }
        };
    
       
};
