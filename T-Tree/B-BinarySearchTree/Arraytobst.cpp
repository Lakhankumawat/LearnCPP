// C++ program to convert an array into a Height balanced Binary Search Tree (BST)

// GFG link:- https://practice.geeksforgeeks.org/problems/array-to-bst4443/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  // finding preorder traversal  
public:
  //funtion to find preorder traversal
    void preordertraversal(vector<int> nums123, int s, int e, vector<int>& res){
    if(s>e){
        return;
    }
    
    //mid element will become root
    int mid=(s+e)/2;
    res.push_back(nums123[mid]);  //append into  an array
    preordertraversal(nums123, s, mid-1, res);
    preordertraversal(nums123, mid+1, e, res);
    
}
   //sorting thr array to bst funtion
vector<int> sortedArrayToBST(vector<int>& nums123) {
        
        //initialise the array
        vector<int> res;
        
        int n=nums123.size();
        preordertraversal(nums123, 0, n-1, res); //calling the preorder traversal function

        /*The preorder traversal of the following 
                BST formed is {2, 1, 3, 4}:
                       2
                     /   \
                    1     3
                           \
                            4
    */

        return res;

        // return the value
    }
};

int main()
{
    //number of testcases
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int>nums123(n);//input an array
        for(int i=0;i<n;i++){
            cin>>nums123[i];
        }
        // making an object of class Solution
        Solution obj;
        vector<int>res=obj.sortedArrayToBST(nums123);//callling the function thorugh object
        for(auto i: res)
            cout<< i <<" "; //print the bst
        cout<<"\n";
    }
    return 0;

    
}
    /* Time Complexity: O(n)
        Space Complexity: O(n)
    */
