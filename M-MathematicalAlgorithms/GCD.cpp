#include <iostream>
#include <numeric>

using namespace std;

int main()
{
   int x, y;
   cout << "Enter First Number: ";
   cin >> x;
   cout << "Enter Second Number: "; 
   cin >> y;
   cout << "greatest common factor = " << gcd(x,y) << endl;
}   
