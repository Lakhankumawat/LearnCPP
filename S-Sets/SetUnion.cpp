#include<iostream>

using namespace std;

int main()
{
   int a[10],b[10],c[10],i,j,k=0,num1,num2;

   //Initialize set A
   cout<<"Enter number of  element of set A\n";
   cin>>num1;
   cout<<"Enter the element of set A \n";
   for(i=0;i<num1;i++)
      cin>>a[i];

   //Initialize set B
   cout<<("Enter number of element of set B\n");
   cin>>num2;
   cout<<"Enter the element of set B \n";
   for(i=0;i<num2;i++)
     cin>>b[i];

   //Finding if there is any repeated element in set A
   for(i=0;i<num1;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i])
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }

   //Adding all the elements of B in C apart from the one that are already pressent.
   for(i=0;i<num2;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }

   //Printing all the elements in set C (which is union of set A and set B)
   cout<<"Union of set A and B is:-\n";
   for(i=0;i<k;i++)
      cout<<" "<<c[i];
    return 0;
}
