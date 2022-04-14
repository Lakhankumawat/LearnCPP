#include <iostream>

using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int div, a, b, ch = 0;
    cin >> a >> b;

    // By Inputting the value it will enter try block and check condition if b=0 then throw the exception.
    try
    {
        if (b == 0)
        {
            throw 101;
        }
        div = a / b;
        cout << "The division is : " << div;
    }

    // Catch block will catch the error.
    catch (int e)
    {
        cout << "Division by zero is Undefined "
             << "Error Code --> " << e;
    }

    // This will catch the error when double type exception is thrown
    catch (double e)
    {
        cout << "Double Val thrown";
    }

    // This will catch the error when char type exception is thrown
    catch (char e)
    {
        cout << "Char Val thrown";
    }

    // This will catch the error when string type exception is thrown
    catch (string e)
    {
        cout << "string Val thrown";
    }

    // This will catch the error when above block not catch the exception thrown.
    catch (...)
    {
        cout << "All catches handeled";
    }

    return 0;
}
