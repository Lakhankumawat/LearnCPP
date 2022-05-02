//to convert a binary tree into its mirror tree

#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

//function to form a new node of a tree
struct TreeNode* newnode(int data){
    TreeNode* node = new TreeNode;
    node->val = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

//utility function to insert a value in the tree
struct TreeNode* insertValue(struct TreeNode* root, int value,
                         queue<TreeNode *>& q)
{
    TreeNode* node = newnode(value);
    if (root == NULL)
        root = node;
 
    else if (q.front()->left == NULL)
        q.front()->left = node;

    else {
        q.front()->right = node;
        q.pop();
    }

    q.push(node);
    return root;
}

//function to create the tree from the level order traversal
struct TreeNode* createTree(int arr[], int n)
{
    TreeNode* root = NULL;
    queue<TreeNode*> q;
    for (int i = 0; i < n; i++)
      root = insertValue(root, arr[i], q);
    return root;
}

//function to print the inorder traversal of binary tree
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
    int n;//number of nodes

    cout<<"Enter the number of nodes : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the level order traversal of tree : "
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //root contains the root of binary tree
    struct TreeNode* root = createTree(arr, n);

    cout<<"The inorder traversal of the given binary Tree : "<<endl;

    inorderTraversal(root);//before mirroring
    cout<<endl;
    
    mirror(root);

    cout<<"The inorder traversal of the mirror binary Tree : "<<endl;

    inorderTraversal(root);//after mirroring
    cout<<endl;

    return 0;
}

//Worst-case Time complexity is O(n)
// for space complexity, If we don’t consider the size of the recursive stack for function calls then O(1) otherwise O(h) where h is the height of the tree.