/*
 * Author: Ismail Magdy Ismail
 * Mail:ismailmagdy88@gmail.com
 * Programme Name: Power calculator
 * Description: calculate the   x to the power of y
 */

#include <iostream>
using namespace std;
double power(double base,double exponent);
int main()
{
    cout<<"Enter the Base Number : ";
    double base;cin>>base;
    cout<<"Enter the exponent : ";
    double exponent;cin>>exponent;
    cout<<base<<" to the power of "<<exponent<<" = "<<power(base,exponent);
     return 0;
}
double power(double base,double exponent)
{
    double sum=1;
    for (int i = 0; i <exponent; ++i) {
        sum*=base;
    }
    return sum;
}
