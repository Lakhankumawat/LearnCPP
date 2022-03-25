// What is Ceil value in BST ?
/* Supoose we are given a 'key' value, The Lowest value in the binary Search Tree that's greater than or equal to  the key
is called Ceil Value */

#include<bits/stdc++.h>
using namespace std;
struct node{//Structure of every node of BST
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

//Insert values into BST
node* INSERTintoBST(node * root,int val){
    if(root==NULL) {
        return new node(val);
    }

    while(true){
        if(root->data<=val){
            if(root->right!=NULL)
            {
                root=root->right;
                }
            else{
                root->right=new node(val);
                break;
                }
          

        }

        else{
            if(root->left!=NULL){
                root=root->left;
                }
            else {
                root->left=new node(val);
                break;
                }
            
        }
    }

//Function to find Ceil value
int findCeil(node * root,int key){
    int ceil=-1;//initial value of ceil
    while(root){
        if(root->data==key){// if value equal to key
          ceil=root->data;
          return ceil;
        }

        if(key> root->data){
          root=root->right;
        }
        else{
          ceil=root->data;
          root=root->left;
        }
    }

    return ceil;
}

int main(){
    int nodes, val;
    cout<<"enter the number of nodes"<<endl;
    cin>>nodes;
    cout<<"enter 1st value"<<endl;
    cin>>val;
    struct node*root=new node(val);
    int i=nodes-1;
    while(i){
        cout<<"enter other  values"<<endl;
        cin>>val;
        INSERTintoBST(root,val);
        i--;
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;

    cout<<"The Floor value in BST w.r.t to the key ->"<<endl;
    cout<<findCeil(root,key);

/* OUTPUT :
enter the number of nodes
9
enter 1st value
8
enter other  values
3
enter other  values
10
enter other  values
1
enter other  values
6
enter other  values
13
enter other  values
14
enter other  values
4
enter other  values
7
enter the key
7
The Floor value in BST w.r.t to the key ->
7
      8
    / \
   3  10
  /\  / \
 1 6 13 14
  /\
 4 7

 Lets Take the key=7 ,  So the Ceilr Value is =7

 */
