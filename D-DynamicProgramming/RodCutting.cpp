#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to find the maximum revenue from cutting a rod of length (len)
// where the rod of length (i) has cost (prices[i - 1])
int RodCutting(vector <int> & prices, int len) {
    // (dp) stores the maximum revenue achieved from cutting a rod of length (from 1 to len)
    vector <int> dp (len + 1, 0);
    // If the rod length is negative (invalid) or zero there's no revenue from it
    if (len <= 0) {
        return 0;
    }
    // Cut a rod of length (i)
    for (int i = 1; i <= len; i++) {
        // divide the rod of length (i) into two rods of lengths (j) and (i - j)
        // and store the maximum revenue
        for (int j = 0; j < i; j++) {
            // (dp[i]) stores the maximum revenue achieved from cutting a rod of length (i)
            dp[i] = max(dp[i], prices[j] + dp[i - j - 1]);
        }
    }
    // (dp[len]) contains the maximum revenue from cutting a rod of length (len)
    return dp[len];
}

int main(){
    int len;
    cout << "Enter the rod length :";
    cin >> len;

    vector <int> prices(len);
    for(int i = 1; i <= len; i++){
        cout << "Enter the price of the rod of length " << i << " :";
        cin >> prices[i - 1];
    }

    cout <<"Maximum revenue = "<<RodCutting(prices, len);
    return 0;
}