#include <iostream>
using namespace std;
void rotateLeft(int array[], int n){
    // assign the first element in the array to variable called temp
    int temp = array[0];
    // shift all elements to the left once
    for (int i = 1; i < n; ++i) {
        array[i - 1] = array[i];
    }
    // assign temp to the last element in the array
    array[n - 1] = temp;
}
int main(){
    int size, nRotate;
    cout << "Pls enter the size of the array:";
    cin >> size;
    cout << "Pls enter the number of rotations:";
    cin >> nRotate;
    int arr[size];
    cout << "Pls enter array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    // calling the function to do the operation nRotate times
    for (int i = 0; i < nRotate; ++i) {
        rotateLeft(arr, size);
    }
    cout << "Array after rotating:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
