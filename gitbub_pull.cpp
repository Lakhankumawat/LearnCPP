#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int n;
    int numbers[5] ; 
    cout << "this program sorts 4 numbers (smallest --> biggest)" << endl;

    for(int i = 1; i < 5; i++)
    {
        cout << "Enter the " << i << "th number: ";
        cin >> n;
        numbers[i] = n;

    }
    
    sort(numbers, numbers + 5);
    for(int i = 1 ; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

}