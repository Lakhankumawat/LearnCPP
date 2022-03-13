/* Kindly consider their are two different code for function overloading and overriding so comment the rest of the part before running it */

/*-----------Function Overloading in CPP----------- */

// CPP program to illustrate
// Function Overloading
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


/*Next Program*/


/*----------- Function Overriding in CPP -----------*/
// CPP program to illustrate
// Function Overriding
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

