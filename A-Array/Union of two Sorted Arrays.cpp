#include <iostream>
using namespace std;

//function for union of two sorted arrays 
void unionArray(int A[],int B[],int m,int n)
{
    int i=0,j=0;
    
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            cout<<A[i++]<<" ";
        }
        else if (A[i]>B[j])
        {
            cout<<B[j++]<<" ";
        }
        else
        {
           cout<<A[i++]<<" ";
           j++;
        }
    }
    
    while(i<m)
    {
      cout<<A[i++]<<" ";
    }
    while(j<n)
    {
        cout<<B[j++]<<" ";
    }
}

//Main Function 
int main()
{
    int A[100];
    int B[100];
    int m,n;
    
    cout<<"\nEnter the size of the first array : \n";
    cin>>m;
    
    cout<<"\nEnter the elements of first array : \n";
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    
    cout<<"\nEnter the size of the second array : \n";
    cin>>n;
    
    cout<<"\nEnter the elements of second array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    

    cout<<"Union of sorted arrays is :\n";
    unionArray(A,B,m,n);
    
    return 0;
}
