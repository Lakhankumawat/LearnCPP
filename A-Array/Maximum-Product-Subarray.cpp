#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int maxLeft = nums[0];
    int maxRight = nums[0];
    
    int prod = 1;
    
    bool zeroPresent =  false;
    
    for(auto i:nums) {
        prod *= i;
        if(i == 0) {
            zeroPresent = true;
            prod = 1;
            continue;
        }
        maxLeft = max(maxLeft,prod);
    }
    
    prod = 1;
    
    for(int j=nums.size()-1;j>=0;j--) {
        prod *= nums[j];
        if(nums[j] == 0) {
            zeroPresent = true;
            prod = 1;
            continue;
        }
        maxRight = max(maxRight,prod);
    }
    
    if(zeroPresent) return max(max(maxLeft,maxRight),0);
    return max(maxLeft,maxRight);
}

int main() {
	int n;
	cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
    	int x;cin>>x;
    	nums.push_back(x);
    }
    cout<<"The Maximum Product Subarray: "<<maxProductSubArray(nums);
    return 0;
}