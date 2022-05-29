#include<iostream>
using namespace std;

int main(){
    int m,n;   
    cout<<"Enter number of rows of the matrix: ";
    cin>>m;
    cout<<"Enter number of columns of the matrix: ";
    cin>>n;
    int matrix[m][n];
    
    //Taking a matrix as an input
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    
    //To print in wave form
    cout<<"Printing elements of matrix in wave form: "<<endl;

    //Loop to traverse all the columns of the matrix
    for(int col_no=0; col_no<n; col_no++){
        
        //if the column number is even, we print from top to bottom
        if(col_no%2==0){
            for(int row_no=0; row_no<m; row_no++){
                cout<<matrix[row_no][col_no]<<" ";
            }
        }
        //if the column number is odd, we print from bottom to top
        else{
            for(int row_no=m-1;row_no>=0;row_no--){
                cout<<matrix[row_no][col_no]<<" ";
            }
        }
    }

    return 0;
}