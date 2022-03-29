# include <bits/stdc++.h>
using namespace std;


int main ()
{
    int size;
    // Get the number of numbers
    cout<<"Please the number of numbers:\n";
    cin>>size;
    vector<int> numbers(size);

    // Get the numbers
    cout<<"Please the numbers:\n";
    for (int i=0; i<size; i++)
        cin>>numbers[i];
    // Sort and Display the numbers
    cout<<"The sorted array in ascending order:  ";
    sort(numbers.begin(),numbers.end());
    for (int i=0; i<size; i++)
        cout<<numbers[i]<<" ";
    cout<<endl;

    cout<<"The sorted array in descending order: ";
    sort(numbers.rbegin(),numbers.rend());
    for (int i=0; i<size; i++)
        cout<<numbers[i]<<" ";
    cout<<endl;


}
