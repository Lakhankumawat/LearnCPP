#include <iostream>
using namespace std;
int main () {
    double area,radius ;
    double pi = 3.14;
    cout << "Please enter the radius of the circle : " ;
    cin >> radius ;
    cout << "The area of the circle is : " ;
    area = pi * pow(radius,2) ;
    cout << area ;
}