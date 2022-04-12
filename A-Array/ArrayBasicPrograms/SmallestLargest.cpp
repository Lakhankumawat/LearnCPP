#include<iostream>
using namespace std;

int main()
{
    cout << "Enter size of array\n";
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        
        cin >> a[i];
    }
    int largest = a[0];
    int smallest = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest = a[i];
        if(a[i]<smallest)
            smallest = a[i];
    }
    cout << "Largest "<<largest<<"\nSmallest "<<smallest<<"\n";
    return 0;
}

