
#include <iostream>
using namespace std;

// Utility function to print elements of an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
/* 1. Using Auxiliary Array
 we can create an auxiliary array of the same type and size as the input array, fill it with elements from the original array in reverse order, and then 
 copy the contents of the auxiliary array into the original one.*/
void reverse1(int arr[], int n)
{
    int aux[n];   //Initializing the auxilliary array
  
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];      //copying elements from main array(arr) to  auxilliary array(aux) in reverse order
    }
  
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];             //again copying elements from auxilliary array(aux) to main array(arr)
    }
  
  //Time-Complexity-->O(n)  where n is the total number of elements in array
  //space-complexity-->O(n) -->as we are using auxilliary array for reversing the main array
}


 
/* 1. Using high and low pointers 
 we can initialize two poinetrs high and low and swapping  arr[low] with arr[high] with reverse our main array(arr) without using any auxuliaary array*/
void reverse2(int arr[], int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--) {   
        swap(arr[low], arr[high]);                                       //swapping the elements from wiht the help of high and low pointers
    }
  
    //Time-Complexity-->O(n)  where n is the total number of elements in array
//space-complexity-->O(1) -->Constant
}


int main()
{
   
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;    //taking n (size of array) as input
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of array"<<endl;
    for(int i=0;i<n;i++)
    {             //taking array as input
        cin>>arr[i];
    }
    
    //calling the utility function reverse1 with passing two arguments array and size of array for reversing the array with the help of auxulliary array
    reverse1(arr, n);
    
    //calling the utility function reverse2 with passing two arguments array and size of array for reversing the array with method 2 (with the help of swapping
    reverse2(arr,n);
  
    //calling another utility function with same arguments for printing the result
    print(arr, n);
 
    return 0;
}

