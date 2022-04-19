#include <iostream>

using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int div, a, b, ch = 0;
    printf("\nEnter Two number for Division \n");
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
        cout << "\nThese lines are executed because we given a undefined thing which is an exception for program and we also specified the error for better understanding for error done by user\n\n";
        cout << "------------------Error------------------------";
        cout << "\n\nDivision by zero is Undefined "
             << "Error Code --> " << e;
        cout << "\n\n------------------------------------------\n";
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
