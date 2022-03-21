#include<iostream>
#include<vector>

using namespace std;

/*
Intuition:
        If there exists a element which is repeated more than n/2 time 
        then there are only n/2-1 elements left which can be removed by n/2 elements 
         and the element which remains will be our ans .
*/
class AlgorithmImplementation {
public:
    int countMajjority(int x,vector<int>&nums) {
        // count whether we have found the correct majority element or not.
        int count  = 0
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == x) count++;
        }
        return count > nums.size()/2;
    }

    int majorityElement(vector<int>& nums) {
         // count of majority element and the majority element
        int countmajority = 0 , majorelement = 0; 
        int n = nums.size();
        for(int i=0;i<n;i++) {
            // get the majority element if not exist
            if(countmajority == 0) {
                majorelement = nums[i];
            }

            // if it is the majority count it  
            if(majorelement == nums[i]) {
                countmajority++;
            }else{   
                countmajority--;     // if not decrease the count 
            }
            
        }
        
        if(not countMajjority(majorelement,nums)) return -1;
        // atlast the majority will be left with us
        return majorelement;
        
    }
};

int main ( ) {
    int  n;  // no of elements
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    AlgorithmImplementation algo;
    cout<<algo.majorityElement(arr);
    return 0;
}
