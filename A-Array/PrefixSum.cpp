/* Given an array of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R (both inclusive)
Constraints
1<=N<=10^5
1<=arr[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int arr[N];
int prefix[N];

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)        // Using 1-based indexing 
    {
        cin>>arr[i];
    }
    
    int q;
    cin>> q;

    for (int i = 1; i <=n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];      // prefix[i] stores the sum of numbers from 1 to i
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;  // O(1) time complexity
    }

    // Time Complexity:  O(N) + O(N) + O(Q) =  10^5 
    // Space Complexity: O(N)  + O(N) (Using prefix array)
    
    return 0;
}
