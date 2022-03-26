#include <iostream>
using namespace std;

int main() {
    int n1, n2, GCD;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // swapping variables n1 and n2 if n2 is greater than n1.
    if ( n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            GCD = i;
        }
    }
    cout << "HCF = " << GCD;

    return 0;
}





