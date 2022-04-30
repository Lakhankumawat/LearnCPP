/*       1
       /  \
      2    3
     / \  / \
    4  5  6  7  */


#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
      
      node(int val)
      {
          data = val;
          left = NULL;
          right = NULL;
      }
};

void levelorder(node* root)
{
    if(root==NULL) return;
    
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);
          
          while(!q.empty())
          {
              node* node = q.front();
              q.pop();
                 
                 if(node!=NULL)
                 {
                     cout<<node->data<<" ";
                         
                         if(node->left)
                            q.push(node->left);
                        if(node->right)
                            q.push(node->right);
                 }
                 else if(!q.empty())
                    q.push(NULL);
          }
}

int main()
{
  struct node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
  
  levelorder(root);
  return 0;
}

