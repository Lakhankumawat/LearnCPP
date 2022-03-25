#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int r,d,x;
  cin >> r >> d >> x;
  
  // he wants to multiply the r and x then subtract d , then print it
  // and assign this value as the new value of x then do this loop for 10 times
  for (int i = 0; i < 10; i++)
  {
    x = r*x - d;
    cout << x << endl;
  }
}