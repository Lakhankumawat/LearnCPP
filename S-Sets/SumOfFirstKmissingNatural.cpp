#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/sum-of-first-k-natural-numbers-missing-in-given-array/ 

// Function to find the sum between 0 to n
long long sumN(long long n)
{
    return n * (n + 1) / 2;
}
 
// Function to calculate the subsequence sum
long long printKMissingSum(vector<int>& nums,
                           int k)
{
    set<int> s(nums.begin(), nums.end());
    int a, b, prev, cnt;
 
    // Create one variable ans
    long long ans = 0;
 
    // Loop to calculate the sum
    for (auto itr = s.begin();
         itr != s.end() && k > 0; itr++) {
        b = *itr;
        if (b < 0) {
            a = 0;
            prev = 0;
            continue;
        }
 
        a = (itr == s.begin() ? 0 : prev);
        cnt = b - 1 - a;
 
        if (cnt <= k) {
            ans += sumN(b - 1) - sumN(a);
            k -= cnt;
        }
        else {
            ans += sumN(a + k) - sumN(a);
            k -= k;
        }
        prev = b;
    }
    if (k > 0) {
        ans += sumN(prev + k) - sumN(prev);
        k -= k;
    }
    return ans;
}
 
// Driver code
int main()
{   int n,k,x;
    cout<<"Enter the size of array ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements of array ";
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    } 
    cout<<"Enter the value of k ";
    cin>>k;
 
    cout << "Sum of first "<<k<<" missing natural number from the array is "<<printKMissingSum(arr, k);
    return 0;
}

