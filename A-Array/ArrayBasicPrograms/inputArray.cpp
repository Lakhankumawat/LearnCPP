// C++ implementation of simple method to find
// minimum difference between any pair
#include <bits/stdc++.h>
using namespace std;

int inputArray()
{
    cout << "Enter  size of Array: ";
    int n;
    cin >> n;
int arr[n]; //{1, 5, 3, 19, 18, 25};
cout << "Enter array elements seperated by space of new line\n";
 for(int i = 0; i < n; i++){
     cin >> arr[i];
 }
cout << "Array elements are : \n";
for (int i=0; i<n-1; i++)
	cout << arr[i] << ", ";

return 0;
}
