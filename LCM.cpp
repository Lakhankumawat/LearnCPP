#include <iostream>
using namespace std;
int main() {
   int a, b, lcm;
   cout << "Please enter the first number!";
   cin >> a;
   cout << "Please enter the second number!";
   cin >> b;
   if(a>b)
   lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
         break;
      }
      lcm++;
   }
   return 0;
}
