#include<iostream>
using namespace std;
#define main_program int main()
//Range-based for loop in C++ is added since C++ 11
  //for ( range_declaration : range_expression ) 
    //loop_statement
 #define forme(i,a,n) for(int i=a;i<n;i++)
main_program{
int n,count=0;
  cin>>n;
  int array[n],i=0;
  forme(i, 0, n) cin >> array[i];
  for(int i=0;i<n-2;i++){
    if(array[i]-array[i+1] == array[i+1]-array[i+2]) {
    count =1; break;}
    else continue;
  }
cout<<count<<endl;
return 0;
}
