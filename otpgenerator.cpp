/*#include<iostream>
using namespace std;
int main()
{
    string otp=to_string(rand()%11);
}*/
#include<iostream>

using namespace std;

int main()

{

  string otp = "";

  string chars= "apcdefghijklmnop123456789";
 srand(static_cast<unsigned int>(time(0)));
  for (size_t i=0;i<6;i++) {

    otp+=chars[rand()%chars.size()];

  }

  cout<<otp;

  return 0;

}
