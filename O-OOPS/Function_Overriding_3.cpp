#include <iostream>
using namespace std;
class First
{
public:
virtual void Calc( int a , float b)
{
int tot= a*b;
cout << "Square of First class is: "<< tot <<endl;
}
void Other()
{
cout<<"Other function in first class"<<endl;
}
};
class Second : public First
{
public:
// Overriding method
void Calc(int a ,float b)
{
float tot = a+b;
cout << "Addition of second class is: " <<tot<<endl;
}
};
int main()
{
int a= 5;
float b=2.5;
Second s;
First &f1 = s;
f1.Calc(a,b);
s.Other();
}
