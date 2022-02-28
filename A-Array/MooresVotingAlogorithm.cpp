// problem link --> https://leetcode.com/problems/majority-element/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*  
        Intution : If there exists a element which is repeated more than n/2 time 
                   then there are only n/2-1 elements left which can be removed by n/2 elements 
                   and the element which remains will be our ans .
        */
        int countmajority = 0 , majorelement = 0;  // will count of the number of majority element and will also store which one is the majority element 
        int n = nums.size();
        for(int i=0;i<n;i++) {
            // if we not found any majority element then who ever comes first will be our majority element
            if(countmajority == 0) {
                majorelement = nums[i];
            }

            // if the current is same as our majority element then increase its count 
            if(majorelement == nums[i]) {
                countmajority++;
            }else{   
                countmajority--;          // else just decrease the count by eliminating the non majority elements 
            }
            
        }
        // finally the majorelement will store the majority element as it is given there exists majority element
        return majorelement;
        
    }
};

int main ( ) {
    vector<int>arr{2,2,1,1,1,2,2};
    Solution s;
    cout<<s.majorityElement(arr);
    return 0;
}

// Time Complexcity -   O ( N ) as we are doing a single traversal on elements
// Space Complexcity -  O ( 1 ) we have not used any extra space other than two integers 