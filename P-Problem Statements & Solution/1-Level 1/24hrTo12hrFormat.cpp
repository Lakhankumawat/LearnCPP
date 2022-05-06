//Link to the Question: https://www.geeksforgeeks.org/convert-time-from-24-hour-clock-to-12-hour-clock-format/


//The approach to solving this problem requires some observations.
//First that the minutes and seconds will be same in both the cases.
//The only change will be in the hours and according to that Meridien will be appended to the string.
//For hours, first convert it from string to int datatype, then take its modulo with 12 and that will be our hours in 12-hour format. Still, there will be a case when hour becomes 00 i.e (12 or 00 in 24-hour format) which we need to handle separately.


//Below is the implementation of above approach:

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
    cout << "Enter time (24 hr format): ";
    cin >> str;

    convert12(str);

    return 0;
}
