#include<bits/stdc++.h>
using namespace std;

void shellSort(int arr[], int sizeArray){
    int a = 0, temp;
    // Loop each time with gap = oldGap / 2
    // Loop to right side of the gap index
    // Loop to check if left side is less than array[gap] then swap   
   for(int gap = sizeArray / 2; gap > 0; gap /= 2){
       for(int i = gap; i < sizeArray; i++){
            temp = arr[i];
            int j;
            for(j = i; j >= gap && arr[j-gap] > temp; j -= gap){
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int gap, sizeArray;
    int arr[] = {77,62,14,9,30,21,80,25,20,55}; 
    sizeArray = sizeof(arr) / sizeof(arr[0]);

    gap = (sizeArray) / 2;

    shellSort(arr,sizeArray);

    cout << "Sorted array:\n";
    for(auto item : arr){
        cout << item << ", ";
    }

    return 0;
}