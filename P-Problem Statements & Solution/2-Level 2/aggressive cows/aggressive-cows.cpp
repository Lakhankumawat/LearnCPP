#include<bits/stdc++.h>
using namespace std;
//function to check if cows can be allocated for the given minimum distance betwen two cows
bool isAllocationPossible(vector<int>& stall, int cows, int minDist) {
    int cntCows = 1;//we placed one cow at the very start of the stall
    int recentlyPlacedPosition = stall[0]; // get the value of the start of the array as onw cow is placed
    
    //for every other stalls check
    for (int i = 1; i < stall.size(); i++) {
        //when distance between the lastly placed cow and current stall is geater than or equal to minimum distance then allocate the cow in that stall
      if (stall[i] - recentlyPlacedPosition >= minDist) {
        cntCows++;
        recentlyPlacedPosition = stall[i];
      }
    }
    //if all cows are placed then move current allocation is possible
    if (cntCows == cows) return true;
    return false;
}
int main() {
    vector<int> stall = {1,2,4,8,9};
    int cows=3;
    int ans;
    sort(stall.begin(),stall.end());
    int low = 1, high = stall[stall.size() - 1] - stall[0];
    //binary search starts
    while (low <= high) {
      int mid = (low + high) >> 1;
      if (isAllocationPossible(stall, cows, mid)) {
        res = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    // printing the answer
    cout << "The largest minimum distance is " << high << endl;
    return 0;
}