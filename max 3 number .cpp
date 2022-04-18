#include <iostream>

using namespace std;

int main()
{
    int n1 ,n2 , n3 ;
    cout << "please enter fisrt number :   ";
    cin >> n1;

    cout << "please enter second number :   ";
    cin >> n2;

    cout << "please enter thrid  number :   ";
    cin >> n3;

    if (n1 > n2 && n1 > n3)
        {
        cout << n1 <<" is max number.\n";
        }

    else if (n2 >n3 )
        {
        cout << n2 <<" is max number.\n";

        }
    else
        {
        cout << n3 <<" is max number.\n";
        }

 }
