/*
Created By : Ahmed Zaher
Date : 202/3/2/8
*/
#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<numeric>
#include<utility>
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
using namespace std;


int solve(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i < dp.size(); i++) {
        for (int j = 0; j < coins.size(); ++j) {
            {
                if (coins[j] <= i)
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
        return dp[amount] == (amount + 1) ? -1 : dp[amount];
    }
}

int main() {
    int n;
    vector <int> coins = {1,2,5};
    int amount = 11;
    cout << solve(coins, amount);
    return 0;
}
