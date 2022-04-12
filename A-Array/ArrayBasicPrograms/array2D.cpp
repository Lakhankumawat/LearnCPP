#include <iostream>
using namespace std;
 
 
int array2D()
{
    cout << "Enter size of row of array: ";
    int row;
    cin >> row;
    cout << "Enter size of column of array: ";
    int col;
    cin >> col;
    cout << "Enter elements of array: \n Total number of elements will row x col\n";
    int array[row][col]; 
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){
            cin >> array[i][j];
        }
    }
    cout << "=====================2D Array=============\n";
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){
            cout << array[i][j] << ", ";
        }
        cout << "\n";
    }
    
    return 0;
}