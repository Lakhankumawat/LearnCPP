//Link to the Question: https://www.geeksforgeeks.org/convert-time-from-24-hour-clock-to-12-hour-clock-format/

//Below is the implementation of the given approach:

#include <bits/stdc++.h>
using namespace std;

// Convert Function which takes in 24hour time and convert it to 12 hour format
void convert12(string str)
{
    // Get Hours
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';

    int hh = h1 * 10 + h2;

    // Finding out the Meridien of time ie. AM or PM
    string Meridien;
    if (hh < 12) {
        Meridien = "AM";
    }
    else
        Meridien = "PM";

    hh %= 12;

    // Handle 00 and 12 case separately
    if (hh == 0) {
        cout << "12";

        // Printing minutes and seconds
        for (int i = 2; i < 8; ++i) {
            cout << str[i];
        }
    }
    else {
        cout << hh;
        // Printing minutes and seconds
        for (int i = 2; i < 8; ++i) {
            cout << str[i];
        }
    }

    // After time is printed cout Meridien
    cout << " " << Meridien << '\n';
}

// Driver code
int main()
{

    string str;
    cout << "Enter time in 24 hr format(hh:mm:ss)= ";
    cin >> str;
    cout << "Time in 12hr format is = ";
    convert12(str);

    return 0;
}
