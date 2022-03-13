#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int add(int a, int b, int c) {
    return a+b+c;
}

double add(double a, double b) {
    return a+b;
}

int main() {
  int x = 3, y = 7, z = 12;
  double n1 = 4.56, n2 = 13.479;
  
  cout<<"x+y = "<<add(x,y)<<endl;
  cout<<"x+y+z = "<<add(x,y,z)<<endl;
  cout<<"n1+n2 = "<<add(n1,n2);
  
  return 0;
}
