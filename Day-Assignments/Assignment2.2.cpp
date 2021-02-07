#include <iostream>
#include <bits/stdc++.h>
//#define repeat(x) for(int _iterator_i = 0; _iterator_i<x;_iterator_i++)
using namespace std;
#define main_program int main()

main_program{
  int d,N;
  cin>> d >>N;
  int num[N];
  int i=0;
  while(i<N){
    cin>>num[i];
    i++;
  }
  int ans[N+1];
  i=0;
  int carry=0;
  while(i<N){
    int mul=d*num[i];
    mul+=carry;
    carry=mul/10;
    ans[i]=mul%10;
    i++;
  }
  if(carry>0)
    ans[i]=carry;
  i=0;
  if(carry>0){
    while(i<N+1){
    cout<<ans[i]<<endl;
    i++;
    }
  }
  else{
     while(i<N){
    cout<<ans[i]<<endl;
    i++;
    }
  }
}
