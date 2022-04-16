#include <iostream>
using namespace std;

//ITERATIVE APPROACH :
void itReverseArray(int A[],int start,int end)  
{
    int temp;
    while(start<end)
    {
        temp = A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
    
}
//RECURSIVE APPROACH :
void recReverseArray(int A[],int start,int end)  
{
    int temp;
    if (start>=end)
    return;
    
    temp = A[start];
    A[start]=A[end];
    A[end]=temp;
        
    recReverseArray (A,start+1,end-1);
}

int main()
{
    int A[100];
    int len,choice;
    cout<<"Enter total elements in an array: "<<endl;
    cin>>len;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>A[i];
    }
    cout<<"Original Array :"<<endl;
    for(int i=0;i<len;i++)           
    {
        cout<<A[i]<<" ";             //Printing original array
    }
    cout<<endl;
    
    cout<<"1.Iterative Approach \n2.Recursive Approach \nEnter a choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 : cout<<"\n Iterative Approach ";
                 itReverseArray(A,0,len-1);         // Function call
                 cout<<"\nReversed Array using Iterative Approach :"<<endl;
                 break;
                 
        case 2 : cout<<"\n Recursive Approach ";
                 recReverseArray(A,0,len-1);         // Function call
                 cout<<"\nReversed Array using Iterative Approach :"<<endl;
                 break;
                 
        default : cout<<"You have entered a wrong choice ! ";
    
    }
    for(int i=0;i<len;i++)           
    {
        cout<<A[i]<<" ";            //printing reversed array.
    }
    
    return 0;
}
