#include<bits/stdc++.h>
using namespace std;
#define epsilon 0.01 
// epsilon be the error in determing roots of a function 
// take an example of a  function whose solution we have to find
// Let function be:  x^3 - x^2  + 2
double value_of_function(double x)
{
    return x*x*x - x*x + 2;
}

// Prints root of func(x) with error of epilon
void bisection_method(double a, double b)
{
    if (value_of_function(a) * value_of_function(b) >= 0)
    {
        cout << "Values of  a and b are not correctly assumed."<<"\n";
        return;
    }
 // let c be the other value between a and b.
    double c = a;

    while ((b-a) >= epsilon)
    {
        // let c be the mid point
        c = (a+b)/2;

        // Checking  if middle point is root
        if (value_of_function(c) == 0.0)
        {
            break;
        }
        // Deciding  the side to repeat the steps 
        else if (value_of_function(c)*value_of_function(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    cout << "The value of roots of the function is : " << c;
}
// Code to solve above function.
int main()
{
    double a =-100;
    double b = 200; // a and b are boundary values.
    bisection_method(a, b); // calling above function
    return 0;
}