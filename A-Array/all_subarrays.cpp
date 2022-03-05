
//Generating all the Subarrays form the Arrays
#include<iostream>
using namespace std;
int main(){
  //Getting the number of elements in the array.
  int n;
  cout<<" n=";
  cin>>n;
  //Declaring the array.
  int a[n];
  //Taking user input.
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i<<" is= ";
    cin>>a[i];
  }
  // Creating a variable which will pick the starting point of the array.
  for(int i=0;i<n;i++){
    //Another variable to pick the end point.
    for(int j=1;j<n;j++){
      // Another variable to print subarray between current starting and ending points.
        for(int k=i;k<=j;k++){
           cout<<a[k];
      }
      cout<<endl;
    }
  }
  return 0;
}
