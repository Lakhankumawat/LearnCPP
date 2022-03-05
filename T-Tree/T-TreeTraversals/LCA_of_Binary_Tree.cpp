// Lowest Common Ancestor of a Binary Tree



//Header files
#include<bits/stdc++.h>
using namespace std;
//Code for Tree node
struct Node{
  int data;
  Node* left;
  Node* right;
};
//Code for creating a new node.
Node* create(int x){
  Node* temp=new Node;
  temp->data=x;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
//function to find lowest common ancestor.
Node *LCA(Node* root ,int n1 ,int n2 )
{
   if(root==NULL)
      return NULL;
   if(root->data==n1||root->data==n2)
      return root;

   Node* left=LCA(root->left,n1,n2);
   Node* right=LCA(root->right,n1,n2);

   if(!left&&!right)
      return NULL;
   if(left&&right)
      return root;
   if(!left&&right)
      return right;
   if(!right&&left)
      return left;

}

//Main fuction.
int main(){
  Node* root=create(11);
  root->left=create(20);
  root->left->right=create(31);
  root->left->right->left=create(49);
  root->left->right->right=create(54);
  root->right=create(56);
  root->right->left=create(60);
  root->right->left->right=create(73);
  root->right->right=create(76);
  Node* temp=LCA(root,73,76);
  if(temp)
  cout<<"LCA of node 73 and 76 is: "<<temp->data<<endl;
  else cout<<" Not found "<<endl;
}

