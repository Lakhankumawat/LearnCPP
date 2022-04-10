class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(), cost.end());
        int ans = 0, n = cost.size()-1;
        
        for(int i=n-2; i>=0; i-=3)
            ans += cost[i];
        
        return accumulate(cost.begin(), cost.end(), 0)-ans;
    }
};
