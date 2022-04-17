#include <iostream>
using namespace std;

// Taylor Series by horner rule using recursion
double taylorHornerRec(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = (1 + (x / n)) * s;
        return taylorHornerRec(x, n - 1); // Calling the function recursively
    }
}

// Driver Code
int main()
{
    // Declaring the int variable
    int x;
    int n;
    // Taking the input from user
    cout << "Enter the value of x";
    cin >> x;

    cout << "Enter the value of n";
    cin >> n;
    // calling the function and printing the result
    cout << taylorHornerRec(x, n) << endl;
}
