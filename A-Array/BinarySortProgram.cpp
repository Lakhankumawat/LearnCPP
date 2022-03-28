//This is a program for binary search.

#include <iostream>
using namespace std;
int main() {
    int cnt,num;
    cout << "Welcome to the binary sort program .\n";
    cout << "Enter the number of numbers you need to sort using binary search :-  ";
    cin >> cnt;

    int arr[cnt];
    for (int i = 0; i<cnt; i++){
        cout << i +1<<"  : ";
        cin >>num;
        arr[i] = num;
    }

    for (int j = 0; j<cnt-1; j++) {
        for (int i=0; i<cnt-1; i++){
            if (arr[i] >arr[i+1]) {
                int temp=0;
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout <<"Enter The Number You Need To Know It's Index After Sorting (-1 Means number not found in array ) :- ";
    int neededNum;
    cin >> neededNum;
    int state = -1;
    for (int k = 0; k<cnt; k++){
       if (neededNum == arr[k])  state =( k+1);
       else if (neededNum != arr[k] ) continue;
    }
    cout <<state;
    return 0;
}
