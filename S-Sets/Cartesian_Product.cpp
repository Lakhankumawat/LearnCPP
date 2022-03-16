#include<iostream>
using namespace std;

int main()
{
    int set1[100],set2[100],n,m,i,j;

    //Initialize Set 1 

    cout<<"Enter the number of elements in Set 1 : ";
    cin>>n;
    cout<<"Enter the elements of Set 1 : ";
    for(i=0;i<n;i++)
    {
        cin>>set1[i];
    }

    //Initialize set 2 

    cout<<"Enter the number of elements in Set 2 :";
    cin>>m;
    cout<<"Enter the elements of Set 2: ";
    for(i=0;i<m;i++)
    {
        cin>>set2[i];
    }

    //Finding the cartesian Product of two set 
    /* Example of cartesian product :
    set 1= {1,2,3}
    set 2 ={4,5}
    cartesian product = {{1,4},{1,5},{2,4}{2,5},{3,4},{3,5}} */
    
    cout<<"The cartesian product of two set is : "<<endl;
    cout<<"{";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"{"<<set1[i]<<","<<set2[j]<<"}";
        }
    }
    cout<<"}";

    return 0;
}