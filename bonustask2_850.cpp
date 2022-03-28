/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    int x;
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    x = arr[0];
    for (int i = 0; i < 3; i++){
        if (x < arr[i])
            x = arr[i];
    }
    cout << "the max number is: " << x << "\n";
    return 0;
}