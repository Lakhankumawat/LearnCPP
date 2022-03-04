// The Fibonacci numbers are the numbers in the following integer sequence. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..and so on

// C++ program for Fibonacci Series using Dynamic Programming upto nth term
#include <iostream>
using namespace std;

void fibonacci(int n)
{
   int F[n];	//Declaring integer array of size n in which we will store and display our numbers
   F[0] = 0;
   F[1] = 1;
   if (n == 1)
   {
      cout << F[0];	//printing the first term 
   }
   else if (n == 2)
   {
      cout << F[0] << "," << F[1];	//printing the first two terms
   }
   else
   {
      cout << F[0] << "," << F[1];
      for (int i = 2; i < n; i++)
      {
         F[i] = F[i - 1] + F[i - 2];	// adding preceeding two terms to get the next term
         cout << "," << F[i];
      }
   }
}

//Driver method
int main()
{
   int n;
   cout << "Enter the value of n" << endl;
   cin >> n;
   if (n < 1)
   {
      cout << "Value of n should be greater than 0";
   }
   else
   {
      cout << "Required fibonacci series is ";
      fibonacci(n);
   }
   return 0;
}
