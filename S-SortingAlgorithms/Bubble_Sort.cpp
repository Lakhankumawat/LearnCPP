#include <iostream>
using namespace std;

void bubble_sort(int arr[], int len);

int main() {
    int num_of_elements;
    cin >> num_of_elements;

    int arr[num_of_elements];
    for(int i = 0; i < num_of_elements; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, num_of_elements);

    for(int i = 0; i < num_of_elements; i++){
        cout << arr[i] << " ";
    }
}

void bubble_sort(int arr[], int len){

    while(len--){ // looping n times

        for (int i = 0; i < len; i++) { // putting the greates num on the right most element
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

    }
}
