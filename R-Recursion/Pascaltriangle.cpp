//(a) Given an integer x print the first x rows of pascal's triangle,
//(B) we have given a integer x we need to print that x row only.

#include <bits/stdc++.h>
using namespace std;

// Function to print first n rows of Pascal's triangle
void printPascal(int Row_num)
{
    int arr[Row_num][Row_num];
 
    for (int i = 0; i < Row_num; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
        if (i == j || j == 0)  //Making first and last element of Every row as 1
            arr[i][j] = 1;
        else
            arr[i][j] = arr[i-1][j - 1] + arr[i- 1][j];  //Adding the element of pascal triangle by two corresponding elements
        cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

// Function to print  nth rows of Pascal's triangle
void printrow(int Row_num)
{
    int first_element = 1;
    // nC0 = 1
    cout << first_element;
 
    for (int i = 1; i <= Row_num; i++) {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = (first_element * (Row_num- i + 1)) / i;
        cout << ", " << curr;
        first_element = curr;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of Rows"<<endl;
    cin>>n;
    cout<<endl<<"Resultant Pascal's Trianngle" <<endl<<endl;
    printPascal(n);
    cout<<endl<<"Elemets of "<<n<<" are"<<endl;
    printrow(n);
    return 0;
}