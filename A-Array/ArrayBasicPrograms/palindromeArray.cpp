#include<iostream>
using namespace std;

int main()
{
    cout << "Enter size of Array :\n";
    int n;
    cin >> n;
    int a[n]; //{2,3,15,15,3,2};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int read = 1;
    int i,j = n-1;
    for(i =0;i<6/2;i++)
    {
        if(a[i]!=a[j])
        {
            read = 0;
            break;
        }
        else
            j--;
    }
    if(read == 1)
        cout << "Array is palindrome.\n";
    else
        cout << "Array is not palindrome.\n";
    return 0;
}