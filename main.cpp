/*Author Name : Shahd Mostafa Mahmoud
 * program purpose : it is a simple calculator
*/
#include <iostream>
using namespace std;
int main() {
   cout << "what do you want to do?\n1)multiplication\n2)division\n3)addition\n4)subtraction";
   int enter;
   cin>> enter;
   if (enter == 1 )
   {
       cout << "Enter two numbers";
       long num1, num2;
       cin >> num1 >> num2;
       long result = num2 * num1;
       cout<<"result : "<< result;
   }
   else if (enter == 2)
   {
       cout << "Enter two numbers";
       long num1, num2;
       cin >> num1 >> num2;
       long result = num2 / num1;
       cout<<"result : "<< result;
   }
   else if (enter == 3)
   {
       cout << "Enter two numbers";
       long num1, num2;
       cin >> num1 >> num2;
       long result = num2 + num1;
       cout<<"result : "<< result;
   }
   else if (enter == 4)
   {
       cout << "Enter two numbers";
       long num1, num2;
       cin >> num1 >> num2;
       long result = num2 - num1;
       cout<<"result : "<< result;
   }
}
