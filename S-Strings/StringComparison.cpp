#include <iostream>
using namespace std;

int main ()
{
    // declare string variables
    string string1;
    string string2;
    // Taking the input of two strings
    cout << " Enter the String 1: " << endl;
    cin >> string1;
    cout << " Enter the String 2: " << endl;
    cin >> string2;

    //comparing the two strings and returning the value
    if ( string1 == string2)
    {
        cout <<endl << " strings are equal." << endl;
    }
    else
    {
        cout <<endl<< "strings are not equal." << endl;
    }
    return 0;
}
