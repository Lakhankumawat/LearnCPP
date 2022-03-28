#include <iostream>
#include <string>

using namespace std;
int main()
{
    int weight;
    cout << "Enter weight\n";
    cin >> weight;
    if (weight % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
