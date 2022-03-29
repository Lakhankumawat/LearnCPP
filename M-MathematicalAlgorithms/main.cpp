#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {

    int a , b , c;
    double sum, avr;
    cout << "Please enter three integers to calculate average";
    cout << "\nFirst number: ";
    cin >> a;
    cout << "\nSecond number: ";
    cin >> b;
    cout << "\nThird number: ";
    cin >> c;

    sum =  a + b + c;
    avr =  sum / 3;

    cout << "\nThe average is: " << avr << endl;

    return 0 ;
}
