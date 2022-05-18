// Check for Valid BST

#include<bits/stdc++.h>
using namespace std;
struct Node{//Structure of Tree Node
int data;
Node*left, *right;
Node(int val){
    data=val;
    left=right=NULL;
}
};

//function to be called
bool valid(Node*root, long minVal,long maxVal){
    if(root==NULL)return true; //empty Tree is valid
    if(root->data>=maxVal or root->data<=minVal)return false;

    return valid(root->left,minVal,root->data)and valid(root->right,root->data,maxVal);//1st Left recursion Then right 
}

//main function which will return thr result in boolean format
bool isValidBST(Node*root){
    return valid(root,INT_MIN,INT_MAX);
}



int main(){
    Node*root=new Node(5);
    root->left=new Node(1);
    root->right=new Node(6);
    root->right->left=new Node(4);
    root->right->right=new Node(8);

/*
Given Tree:
     5
    / \
   1  6
     /\
    4 8

*/


    if(isValidBST(root))cout<<"It's a Valid BST"<<endl;
    else
      cout<<"It's not valid BST"<<endl;
}