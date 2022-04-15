// C++ program to convert time from
// 12-hour format to 24-hour format
#include <iostream>
using namespace std;

// Function to convert time from
// 12-hour format to 24-hour format
void convertTime(string t)
{
    // Extracting hours
    int h1 = (int)t[1] - '0';
    int h2 = (int)t[0] - '0';
    int HH = (h2 * 10 + h1 % 10);
    // If the given time is in "AM"

    if (t[9] == 'A' || t[8] == 'A')
    {
        if (HH == 12)
        {
            cout << "00";
            for (int i = 2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
        else
        {
            for (int i = 0; i <= 7; i++)
            {
                cout << t[i];
            }
        }
    }
    // If the given time is in "PM"
    else
    {
        if (HH == 12)
        {
            cout << "12";
            for (int i = 2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
        else
        {
            HH = HH + 12;
            cout << HH;
            for (int i = 2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
    }
    cout << endl;
}
int main()
{
    string time;
    
    cout << "Enter time in 12-hour format as (HH:TT:SS AM/PM): "<<endl;
    getline(cin, time);
    cout << "Time in 24-hour format: " << endl;
    convertTime(time);
 
    return 0;
}