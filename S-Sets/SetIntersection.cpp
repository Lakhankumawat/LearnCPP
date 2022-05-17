#include<iostream>

using namespace std;

int main()
{
   int a[10],b[10],c[10],i,j,k=0,num1,num2;

   //Initialize set A
   cout<<"Enter number of  elements of set A\n";
   cin>>num1;
   cout<<"Enter the elements of set A \n";
   for(i=0;i<num1;i++)
      cin>>a[i];

   //Initialize set B
   cout<<("Enter number of elements of set B\n");
   cin>>num2;
   cout<<"Enter the elements of set B \n";
   for(i=0;i<num2;i++)
     cin>>b[i];



   for(i=0;i<num1;i++)
   {
      for(j=0;j<num2;j++)
      {
         if(a[i]== b[j])
         {
             c[k]=a[i];      //Copy intersecting elements of set A and B into a new array C
             k++;
         }
        
       }
      
    }

   //Printing all the elements in set C (which is intersection of set A and set B)
   cout<<"Intersection of set A and B is:-\n";
   for(i=0;i<k;i++)
      cout<<" "<<c[i];
    return 0;
}
