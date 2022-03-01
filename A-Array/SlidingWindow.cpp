//This technique is very useful in CP and DSA and helps in getting results related to subarrays in linear time i.e O(n).


#include<bits/stdc++.h>
using namespace std;

int SlidingWindow(int arr[], int n, int size){
  

  //First, we need a window of size which is required. Here, the size of window is 4
  //In this program, we are storing maximum sum of all subarrays, so a variable "maxm" to store max value.
  int win_size= 0, maxm= INT_MIN;

  //Initially, we will store the sum of first subarray of the array which is from index 0 to size-1
  for(int i=0; i<size; i++)
  {
    win_size+= arr[i];
  }

  //Now, we set the maxm to the size of first window.
  maxm= win_size;

  //Now, we will store sum of all next subarrays and compare them with the previous maxm and update if required.
  //This part will start from index size to n-1
   for(int i=size; i<n; i++){
   

   //For every next subarray, we just have to remove the leftmost cornered element from the win_size and then add the next element after the present window
    //For Eg. here we are going to remove arr[0] & add arr[4] instead
    //then we will remove arr[1] && arr[5] and so on. 
    win_size+= arr[i] - arr[i-size];
    maxm= max(win_size, maxm);
  }
  return maxm;
}

int main(){
  int arr[10]= {2, 3, 4, 2, 4, 5, 2, 4, 5, 2};
  int n= sizeof(arr)/sizeof(arr[0]);
  int sizeOfWindow= 4;
  cout<<"Array is: ";
  for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Maximum Sum of consecutive 4 elements in this array is: "<<SlidingWindow(arr, n, sizeOfWindow); 
}
