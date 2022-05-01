//to convert a binary tree into its mirror tree

#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

//to form a new node of a tree
struct TreeNode* newnode(int data){
    TreeNode* node = new TreeNode;
    node->val = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void inorderTraversal(TreeNode* root){
    if(root== NULL){
        return;
    }
    
    inorderTraversal(root->left);
    cout<< root->val <<" ";
    inorderTraversal(root->right);

    return ;
}
 
/*To mirror a given binary tree swap the left and right trees of every subtree 
   Recursively 
*/  
void mirror(TreeNode* root){
    if(root==NULL){
        return ;
    }
    
    //mirroring the left and right subtrees individually
    mirror(root->left);
    mirror(root->right);

    struct TreeNode* temp;
    
    //swapping left and right trees with respect to current root
    temp=root->left;
    root->left=root->right;
    root->right=temp;
}


int main(){
   struct TreeNode *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    /* Given tree in this case is shown below : 
                1
               / \
              2   3
             / \
            4   5
    */

    cout<<"The inorder traversal of the given binary Tree : "<<endl;

    inorderTraversal(root);
    cout<<endl;
 
    mirror(root);

    cout<<"The inorder traversal of the mirror binary Tree : "<<endl;

    inorderTraversal(root);
    cout<<endl;

    return 0;
}

//Worst-case Time complexity is O(n)
// for space complexity, If we don’t consider the size of the recursive stack for function calls then O(1) otherwise O(h) where h is the height of the tree.