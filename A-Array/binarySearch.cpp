// Iterative

#include <iostream>
using namespace std;
class Search
{
public:
    int n, key;
    int arr[];
    void read_data();
    int binarySearch();
};
void Search ::read_data()
{
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the sorted array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched : " << endl;
    cin >> key;
}
int Search ::binarySearch()
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    Search s;
    s.read_data();
    cout<<"Index of  "<<s.key<<" is : "<<s.binarySearch();
    return 0;
}
