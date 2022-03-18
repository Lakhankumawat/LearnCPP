//  https://en.wikipedia.org/wiki/Radix_sort


// Made by : Mohanad Talat 
// username @Github : mohandtalat91

#include <iostream>

using namespace std ; 

int get_max( int arr[], int n){
    
    int myMax = -1 ; 
    for(int i=0; i<n; i++){
        if(arr[i] > myMax)myMax = arr[i] ; 
    }
    
    return myMax ;
}

void count_sort(int arr[], int n, int digit){
    int count[10] = {0} ; 
    int sorted[n] ; 
    
    for(int i=0; i<n; i++){
        count[(arr[i]/digit)%10]++ ; 
    }
    for(int i=1; i<10; i++){
        count[i] += count[i-1] ; 
    }
    
    for(int i=n-1; i>=0; i--){
        sorted[--count[(arr[i]/digit)%10]] = arr[i] ; 
    }
    
    for(int i=0; i<n; i++){
        arr[i] = sorted[i] ; 
    }
}

void radix_sort(int arr[], int n){
    
    int myMax = get_max(arr,n) ;
    
    for(int digit=1; myMax/digit; digit*=10){
        count_sort(arr,n,digit) ; 
    }
}

int main() {

    //                  :  The best :  The avg : The worst  : Space 
    //       complexity :    O(kn)  :   O(kn)  :  O(kn)     :  O(d+n)

	//         Stability :   Inplace    :      Comparison Sort 
        //          Yes      :     Yes      :       No 

    int arr[] = {121,1,432,23,564,45,788} ; 
    int n = sizeof(arr)/sizeof(int) ;
    
    cout << "Before sorting : " ; 
    for(int i=0; i<n; i++){
        printf("%d",arr[i] ); 
        printf(" ") ; 
    }
    
    radix_sort(arr, n) ; 
    
    cout << "\n\nAfter sorting : " ;
    for(int i=0; i<n; i++){
        printf("%d",arr[i] ); 
        printf(" ") ; 
    }
    return 0;
}