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
    struct node* p=new node(8);
    p->left=new node(3);
    p->right=new node(10);
    p->right->right=new node(14);
    p->right->left=new node(13);
    p->left->left=new node(1);
    p->left->right=new node(6);
    p->left->right->left=new node(4);
    p->left->right->right=new node(7);
     cout<<"the Ceil value of the given key is -> "<<findCeil(p,9)<<endl;
    
}

/* OUTPUT :
      8
    / \
   3  10
  /\  / \
 1 6 13 14
  /\
 4 7

 Lets Take the key=9 ,  So the Ceilr Value is =10

 */