// leetcode 1
// Problem Statement: https://leetcode.com/problems/two-sum/

/* 
Easy and understandable Solution of Two Sum Problem
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v, ans;
        int l = 0, r = nums.size() - 1, n1, n2;
        v = nums;
        sort(nums.begin(), nums.end());      // inbuilt sort function in c++ stl
        while(l < r)                         // implementing quick sort
        {
            if(nums[l] + nums[r] > target) r--;
			      else if(nums[l] + nums[r] < target) l++;
			      else{
				      n1 = nums[l], n2 = nums[r];
				      break;
			      }
        }
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == n1 || v[i] == n2)
            {
                ans.push_back(i);
            }
            if(ans.size() == 2)
                break;
        }
        return ans;
    }
};
