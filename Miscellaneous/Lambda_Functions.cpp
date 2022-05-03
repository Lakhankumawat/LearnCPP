#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    // Empty lambda function
    []()
    {
        cout << "This is the first Lambda function \n";
    }();

    // Capturing the variables and passing it at the end of function only
    [](int a, int b)
    {
        cout << abs(a - b) << endl;
    }(10, 30);

    // Defining the return type by -> return type
    int a = [](int a, int b) -> int
    {
        return a + b;
    }(20, 34);
    cout << a << "\n";

    int x = 10;
    int y = 40;
    float z = 4.5;

    // Capturing the variables as capture by reference.
    [&x, &y, &z]()
    {
        cout << y - x + z;
    }();

    // Shortcut to capture all variables as capture by reference
    [&]()
    {
        cout << "\n"
             << y - x + z;
    }();

    return 0;
}
