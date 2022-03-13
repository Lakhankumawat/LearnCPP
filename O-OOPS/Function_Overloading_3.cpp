#include <iostream>
using namespace std;
int calc(int);
float calc(float);
int calc(int, float);
int main()
{
int a = 10;
float b = 11.2;
calc(a);
calc(b);
calc(a,b);
}
int calc(int a)
{
int tot=a*a;
cout << " Area of Square A is: " << tot<<endl;
}
float calc(float b)
{
float tot = b*b;
cout << " Area of Square B is: " << tot <<endl;
}
int calc(int a, float b)
{
int tot = a*b;
cout << " Area of Square C is: " << tot << endl;
}
