#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    // check the prefix sum
    bool all_neg = true;
    int currSum = 0;
    int maxVal = INT_MIN;
    int maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
            all_neg = false;
        if (nums[i] > maxVal)
            maxVal = nums[i];
        currSum += nums[i];

        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    if (all_neg)
        return maxVal;
    else
        return maxSum;
}
