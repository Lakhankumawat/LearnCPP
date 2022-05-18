#include <bits/stdc++.h>

using namespace std;
// This function prints the juggler Sequence using loop
void printJugglerWithLoop(long long a)
{
    // print the first term
    cout<<a<< " ";
    // calculate terms until
    // last term is not 1
    while(a!=1)
    {
        // Check if previous term
        // is even or odd
        if(a % 2 == 0)
        {
            // calculate next term
            a =floor(sqrt(a));

        }
        else
        {
            // for odd previous term
            // calculate next term
            a =floor(sqrt(a) * sqrt(a) * sqrt(a));
        }
        // print the next term
        cout<<a<< " ";
    }

}
// This function prints the juggler Sequence using recursion
void printJugglerWithRec(long long a)
{
    // print the term
    cout<<a<< " ";
    // This base condition, when a == 1 then end the recursion.
    if(a == 1)
    {
        return;
    }
    // Check if previous term
    // is even or odd
    // then calling function again with next term
    else if(a % 2 == 0)
    {
        printJugglerWithRec(floor(sqrt(a)));
    }
    else
    {
        printJugglerWithRec(floor(sqrt(a) * sqrt(a) * sqrt(a)));
    }

}
int main()
{
    long long a;
    cout << "Enter first term for juggler sequence:" << endl;
    cin>>a;
    cout << "Juggler sequence using Loop: ";
    printJugglerWithLoop(a);
    cout<<endl<<endl;
    cout << "Juggler sequence using Recursion: ";
    printJugglerWithRec(a);
    cout<<endl<<endl;
    return 0;
}
