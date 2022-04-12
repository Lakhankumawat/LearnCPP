#include <iostream>
using namespace std;
 
 
int columnWiseSum()
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
    //rowwise sum
    for (int i = 0; i < col; i++) {
        int csum = 0;
        for(int j = 0; j < row; j++){
            csum += array[j][i];
        }
        cout << "Sum of elements of column "<< i+1<< " is " << csum <<" \n";
    }
    return 0;
}