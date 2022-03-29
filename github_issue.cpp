#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, avg;
    cout << "Enter the three numbers with one space in between: ";
    cin >> n1 >> n2 >> n3;
    avg = (n1 + n2 + n3) / 3;
    cout << "The average of the three numbers is: " << avg;
}