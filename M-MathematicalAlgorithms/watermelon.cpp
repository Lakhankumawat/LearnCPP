#include <iostream>
#include <string>

using namespace std;
int main()
{
    int weight;
    cout << "Enter weight\n";
    cin >> weight;
    if (weight % 4 == 0 or (weight - 2) % 2 == 0 and weight > 3)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
