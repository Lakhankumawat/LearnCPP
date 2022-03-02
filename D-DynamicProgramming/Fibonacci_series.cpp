// The Fibonacci numbers are the numbers in the following integer sequence. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..and so on

// C++ program for Fibonacci Series using Dynamic Programming upto nth term


#include<iostream>
using namespace std;
 
void fibonacci(int n)
{
    int F[n+1];
  F[0]=0;  // Making the first term  zero
   F[1]=1; // Making the second  term  one

if (n==1) {cout<<F[0];}  //printing the first term

 else if(n==2) {cout<<F[0]<<" "<<F[1];}  //printing the first two terms

 else{
   
 cout<<F[0]<<" "<<F[1]<<" ";
   
    for(int i=2;i<n;i++){
       
        F[i]=F[i-1]+F[i-2]; //printing the series if n>2
        cout<<F[i]<<" ";
    }
 }
}
 
 //Driver meathod
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
 
    cout<<"Required fibonacci series is ";
    fibonacci(n);
 
   
    return 0;
}

//The space complexity is O(n)
//The time complexity is  O(n)

