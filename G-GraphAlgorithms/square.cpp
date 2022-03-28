#include <iostream>
using namespace std;
int main()
{
    int dimension;
    cout<<"enter the square dimension\n";
   cin>>dimension;
   for(int i = 1; i<=dimension; ++i)
   {
       for(int j = 1; j<=dimension; ++j)
       {
            if (i == 1 || i ==dimension)
                cout<<" *";
           else if (j == 1 || j ==dimension)
               cout<<" *";
           else
               cout<<"  ";
       }
       cout<<endl;
   }

    return 0;
}
