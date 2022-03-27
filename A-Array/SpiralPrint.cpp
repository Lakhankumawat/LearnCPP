
/********************************************************* SOLUTION *******************************************************************/

#include <iostream>
using namespace std;

void spiralPrint(int input[][100], int row, int col){
    int i, k = 0, l = 0; 
     /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
    while (k < row && l < col) { 
        /* Print the first row from
               the remaining rows */
        for (i = l; i < col; i++) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
       /* Print the last column
         from the remaining columns */
        for (i = k; i < row; i++) { 
            cout << input[i][col - 1] << " "; 
        } 
        col--; 
     /* Print the last row from
                the remaining rows */
        if (k < row){ 
            for (i = col - 1; i >= l; i--) { 
                cout << input[row - 1][i] << " "; 
            } 
            row--; 
        } 
  /* Print the first column from
                   the remaining columns */
        if (l < col){ 
            for (i = row - 1; i >= k; i--) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    } 
}
// THEN YOU MAY CALL THIS FUNCTION IN MAIN TO PRINT THE SPIRAL FORMAT OF 2-D ARRAY.



/* Driver Code */
int main()
{
   int row, col, i, j, arr[100][100];
    cout<<"Enter the Row and Column Size for Array: ";
    cin>>row>>col;
    cout<<"Enter All The Array Elements: in Sequence \n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cin>>arr[i][j];
    }
    cout<<"\nThe Array is:\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
cout << "THE SPIRAL PRINT IS" << endl;
spiralPrint(arr,row,col);


}
 




