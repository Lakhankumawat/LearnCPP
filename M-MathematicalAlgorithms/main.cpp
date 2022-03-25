// Program name: Running median
// Author: KarimH537
// Last modification date: 25/3/2022

#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main() {
    vector<int> arr;
    int x, temp;
    cout << "Enter the number of elements: ";
    cin >> x;
    for (int i = 0; i < x; i++) {
        //take input in array
        cin >> temp;
        arr.push_back(temp);
        sort(arr.begin(), arr.end());

        //if array's length is odd take the middle
        if ((i + 1) % 2 == 1)cout << arr[(i + 1) / 2] << endl;
            // if even take (n/2 +1) + (n/2) and divide them by 2
        else {
            int first = arr[i / 2];
            int second = arr[i / 2 + 1];
            cout << ((first + second) / 2) << endl;
        }


    }

}
