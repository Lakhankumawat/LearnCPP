#include <iostream>
using namespace std;
 
 
int reverseArray()
{
    cout << "Enter size of array: \n";
    int size;
    cin >> size;
    cout << "Enter elements of array: \n";
    int array[size]; // = {4, 5, 1, 3, 9};
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "=====================Array before reverse=============\n";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    int temp=0;
 
    int i=0;           //pointing 1st element of the array
    int j=size- 1;     //pointing last element of the array
    
    while( i < j){
        //swap
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
 
        //Update i and j
        i++;  
        j--;  
    }
    

    //output the array
    cout << "\n\n=====================Array After reversing=============\n";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}