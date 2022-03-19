// What is Floor value in BST ?
/* Supoose we are given a 'key' value, The greatest value in the binary Search Tree that's smaller than the key
is called Floor Value */

#include<bits/stdc++.h>
using namespace std;
struct node{ //Structure of every node of BST
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

//Function to find floor value
int FloorInBst(node * root, int key){
    int floor=-1; //initial value of floor
    while(root){
        if(root->data==key)// if value equal to key
          {
              floor=root->data;
              return floor;
          }
        if(key>root->data){ // if node value is less than key Go to right
            floor=root->data;
            root=root->right;
        }
        else{ // if node value is greater than key Go to Left
            root=root->left;
        }
    }
    return floor;
}

int main(){
    struct node*p=new node(10);
    p->left=new node(5);
    p->right=new node(15);
    p->left->left=new node(2);
    p->left->right=new node(8);
    p->left->right->left=new node(6);

    cout<<"the floor value of the given key is -> "<<FloorInBst(p,14)<<endl;
    cout<<"the floor value of the given key is -> "<<FloorInBst(p,7)<<endl;
}

/* OUTPUT:: 
     10
    /  \
   5   15
  / \  
 2  8
   /
  6

Lets Take the key=14 ,  So the Floor Value is =10

*/
  