#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
// set is the subset
// sos is sum of subset
// tar is target


// function to print subset sum
void printTargetSumSubsets(vector<int> arr, int idx, string set, int sos, int tar) {
  if (sos > tar) {
    return;
  }
  if (idx == arr.size()) {
    if (sos == tar) {
      cout << set << "." << endl;
    }
    return;
  }
  string val = to_string(arr[idx]);
  //Call a recursive function for the YES part of the element. Here, that element gets added to the subset string and arithmetically added.
  printTargetSumSubsets(arr, idx + 1, set + val + ", ", sos + arr[idx], tar);
  //Call a recursive function for the NO part of that element. Here, that element does not get added to either the subset string.
  printTargetSumSubsets(arr, idx + 1, set, sos, tar);
}


int main() {
  int n, tar;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> tar;
  printTargetSumSubsets(arr, 0, "", 0, tar);
}
