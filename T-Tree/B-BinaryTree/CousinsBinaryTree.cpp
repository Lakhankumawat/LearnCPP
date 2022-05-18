
//Cousins in Binary Tree
//link of the problem statement :- https://leetcode.com/problems/cousins-in-binary-tree/


#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
 
    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

void findParentsAndLevels(TreeNode* root,int currentParent,int currentLevel, int x,int y ,vector<int>&parents,vector<int>&levels)
{
    if(root == NULL) return;
        
    //if current value is equal to x ,then update the parent & level of x
    if(root->val == x)
    {
         parents[0] = currentParent;
        levels[0] = currentLevel; 
    }
        
    //if current value is equal to y ,then update the parent & level of y
    if(root->val == y)
    {
        parents[1] = currentParent;
        levels[1] = currentLevel;
    }
        
    findParentsAndLevels(root->left,root->val,currentLevel+1,x,y,parents,levels);
    findParentsAndLevels(root->right,root->val,currentLevel+1,x,y,parents,levels);
            
}
    
bool isCousins(TreeNode* root, int x, int y)
{
    //parents[0]->represents parent of x & parents[1]->represents parent of y
    vector<int>parents(2,0);
        
    //levels[0]->represents level of x & levels[1]->represents level of y
    vector<int>levels(2,0);
        
    findParentsAndLevels(root,-1,0,x,y,parents,levels);//-1 represents the parent of the root node
        
    if(parents[0] != parents[1] && levels[0] == levels[1])
        return true;
    else
        return false;
}


int main()
{
 
    TreeNode* root = new TreeNode(1);
    
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    
    root->left->left = new TreeNode(4);
 
    int x,y;
    cin>>x>>y;
    
    bool ans = isCousins(root,x,y);
    cout<<ans;
 
    return 0;
}