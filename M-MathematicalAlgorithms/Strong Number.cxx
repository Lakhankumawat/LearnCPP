//Author : Dina Maher Fadl .
//Program Name : Check whether a number is Krishnamurthy or not .
//Program Describtion : Check if the sum of factorial of digits is equal to the original number .
// Last Modification Date : 24/3/2022
// Version : 1.0
#include <iostream>
#include <cmath>>

using namespace std;

/* - Find the factorial of each number .
- Take the sum of the factorial of each digit .
- If that is the same as a given number, the number is Krishnamurty (strong) number 
*/

long factorial(int n){      // Factorial function
   if(n <= 1){         // If the num is 1 or less
      return 1;
   }
   return n * factorial(n - 1); // Calculate the factorial of the number .
}
// Check function
bool isstrong(int number) {
   int original = number;
   int sum = 0;
   while(number > 0){
      sum += factorial(number % 10);
      number /= 10;
   }
   if(sum == original){
      return true;
   }
   return false;

// Main function   
}
int main() {
   int n;
   // Take the number from the user .
   cin>>n;
   if(isstrong(n)){
      cout << n << " is Krishnamurty (Strong) Number .";
   } else {
      cout << n << " is not Krishnamurty (Strong) Number .";
   }
}