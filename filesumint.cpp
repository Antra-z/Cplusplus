// display the sum and average
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    ifstream my_file("first.txt");
    if(!my_file)
    {
        cout<<"Failed to open the file."<<endl;
        return 1;
    }
    string line;
    int sum=0;
    int count=0;
	while(getline(my_file,line))
	{    //use eof() to check the end of data
		//store the current lin of the file in the "line" variable
		//getline(my_file,line);
		string n1="";
		for(auto i: line){
			if(isdigit(i))
			{
                //cout<<i;
				n1+=i;
			}
		}
        //cout<<n1;
        if (!n1.empty()) {

            int n2 = std::stoi(n1);
            sum += n2;
            count++;
        }
		
		//print the line variable
		//cout<<line<<endl;
	}
	cout<<sum<<endl;
    cout<<(sum+0.0)/count<<endl;
}