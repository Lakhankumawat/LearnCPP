#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;
int main()
{
    //Declaration
    int mat[50][50],trace=0,i,j,a,b;
    float normal;
    cout<<"Enter the order of the matrix : \n";
    cin>>a>>b;

    // Condition for trace of a matrix
    if(a!=b)
    {
        cout<<"invalid matrix!\n";
        exit(0);
    }

    // Taking the input of elements of a matrix
    cout<<"Enter the elements of the matrix : \n";
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            cin>>mat[i][j];
        }
    }

    // print matrix elements
    cout<<"The matrix is :"<<endl;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }

    //sum of all elements for finding the normal
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            normal = normal + mat[i][j];
        }
    }
    normal = sqrt(normal);

    // sum of diagonal elements of a matrix for finding trace of a matrix
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(i==j)
            {
                trace = trace + mat[i][j];
            }
        }
    }

    cout<<endl;
    cout<<"The normal of matrix is "<<normal<<endl;
    cout<<"The trace of matrix is "<<trace;
    cout<<endl;
}
