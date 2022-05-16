#include <iostream>
using namespace std;

// recursive function to calculate square of a number
int square(int x)
 {
  // base case
    if (x == 0)
    {
      return x; 
    }

  // recursive case
  else 
   {
      return square(x-1) + (2*x) - 1;
   }
}
int main() {
  // implementation of square function

  int input;
  cout<<"Enter the value of input";
  cin>>input;
  cout << input<<"^2 = "<<square(input);
  return 0;
}
