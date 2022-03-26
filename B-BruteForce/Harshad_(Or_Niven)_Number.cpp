#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:"; cin >> num;

    // temp is a copy of num
    int temp = num, sum = 0;

    while (temp != 0) // While there is more digits
    {
        int rem = temp % 10; // Take the rightmost digit as remainder of 10
        sum += rem;
        temp /= 10; // Erase the rightmost digit
    }

    if (num % sum == 0)
        cout << num << " is a Harshad number" << endl;
    else
        cout << num << " is not a Harshad number" << endl;

    return 0;
}
