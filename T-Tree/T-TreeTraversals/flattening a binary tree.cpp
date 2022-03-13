 #include<bits/stdc++.h>
 using namespace std;
 
 class TreeNode {
 	public:
      int val;
      TreeNode *left;
      TreeNode *right;
    
     
  };
  
  
  //creating new tree node
TreeNode* newTreeNode(int value)
{TreeNode* root=new TreeNode;
root->val=value;
root->right=root->left=nullptr;
	return root;
}

//morris algorithm 
    void flatten(TreeNode *root) {
		TreeNode*now = root;
		while (now)
		{
			if(now->left)
			{
                //Find current node's prenode that links to current node's right subtree
				TreeNode* pre = now->left;
				while(pre->right)
				{
					pre = pre->right;
				}
				pre->right = now->right;
                //Use current node's left subtree to replace its right subtree(original right 
                //subtree is already linked by current node's prenode
				now->right = now->left;
				now->left = nullptr;
			}
			now = now->right;
		}
    }
    //inorder traversal
void inorder(TreeNode *root)
{
	if(!root)
	return;
	inorder(root->left);
	cout<<root->val<<"  ";
	inorder(root->right);
	
	
}
int main()
{  /*    1
        /   \
       2     5
      / \     \
     3   4     6 */
    TreeNode* root = newTreeNode(1);
    root->left =  newTreeNode(2);
    root->right =  newTreeNode(5);
    root->left->left = newTreeNode(3);
    root->left->right =  newTreeNode(4);
    root->right->right =  newTreeNode(6);
 
    flatten(root);
    cout << "The Inorder traversal after flattening binary tree :\n";
    inorder(root);
    return 0;
}
	

