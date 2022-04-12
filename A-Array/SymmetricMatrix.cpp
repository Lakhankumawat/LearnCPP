#include <iostream>
using namespace std;

int main()
{
    int i,j,r,c,flag=0;

    //taking input for number of rows and columns
    cout<<"Enter order of matrix :"<<endl;
    cin>>r>>c;
    int arr[r][c];

    //checking if the matrix is square
    if(r!=c)
        cout<<"\nNot a symmetric matrix";
    else
    {
        //taking input for values of the matrix
        cout<<"\nEnter the values in the matrix :"<<endl;
        for(i=0 ; i<r ; i++)
        {
            for(j=0 ; j<c ; j++)
            {
                cin>>arr[i][j];
            }
        }

        //printing the user entered matrix
        cout<<"The entered matrix is :";
        for(i=0 ; i<r ; i++)
        {
            cout<<endl;
            for(j=0 ; j<c ; j++)
            {
                cout<<arr[i][j];
            }
        }

        //checking for symmetry
        for(i=0 ; i<r ; i++)
        {
            for(j=0 ; j<c ; j++)
            {
                if (arr[i][j] != arr[j][i])
                {
                    flag=1;
                    break;
                }
            }
        }

        //output
        if(flag == 0)
            cout<<endl<<"\nIt's a symmetric matrix"<<endl;
        else
            cout<<endl<<"\nNot a symmetric matrix"<<endl;
    }
    return 0;
}
