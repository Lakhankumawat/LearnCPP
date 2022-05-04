#include <iostream>
using namespace std;

int main() {
    int num, temp, r, result = 0;
    cout << "Enter a  3 digit number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        // r contains the last digit
        r = temp % 10;

        result += r * r * r;

        // removing last digit from the temp
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
