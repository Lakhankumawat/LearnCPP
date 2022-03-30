#include <bits/stdc++.h>
#include<set>
using namespace std;

//Create class.
class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    //Parameters are sizes of two arrays and two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        //Steps for solution:

        //1.Convert Array 'a' to set using Constructor of set Data Structure set(begin of array,end of array).
        set<int> s(a, a + n); // here Complexity Time equals O(n log n), Complexity Space equals O(n).
        //2.Insert Array 'b' in  set 's'  using insert(begin of array,end of array) function.
        s.insert(b, b + m); // here Complexity Time  equals O(m log m), Complexity Space equals O(m).
        //then Complexity Time of all program equals O((n + m)log(n + m)))
        //then Complexity Space of all program equals O(n + m)
        //3.Return size of set that consider about count of elements in union of two arrays.
        return s.size();

    }
};



int main()
{
    // 't' variable of number of repeating program
    int t;
    cin >> t;
    // Using while loop for repeat program t times.
    while(t--)
    {
        //Declare size of two arrays.
        int n, m;
        cin >> n >> m;
        //Declare two arrays.
        int a[n], b[m];
        //initialize two array.
        for(int i = 0; i<n; i++)
            cin >> a[i];

        for(int i = 0; i<m; i++)
            cin >> b[i];

        //Declare object from Solution class.
        Solution ob;

        // Calling doUnion Function using ob Object for return the count of union elements of the two arrays.
        cout << ob.doUnion(a, n, b, m) << endl;

    }

    return 0;
}
