#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
//function to create node
Node* create(int x){
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
//function to move left subtree
void left(Node* root){
    if(root==NULL)return;
    if(root->left!=NULL){
        cout<<root->data<<" ";
        left(root->left);
    }
    else if(root->right!=NULL){
        cout<<root->data<<" ";
        left(root->right);
    }
}
//function to move right subtree
void right(Node* root){
    if(root==NULL)return;
    if(root->right!=NULL){
        right(root->right);
        cout<<root->data<<" ";
    }
    else if(root->left!=NULL){
        right(root->left);
        cout<<root->data<<" ";
    }
}
//function to move leaf node
void leaf(Node* root){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)cout<<root->data<<" ";
    leaf(root->left);
    leaf(root->right);
}
//function for print boundary nodes
void printBoundary(Node *root)
{
    if(root==NULL)return;
    cout<<root->data<<" ";
    left(root->left);
    leaf(root->left);
    leaf(root->right);
    right(root->right);

}
//main function
int main(){
    Node* root=create(1);
    root->left=create(2);
    root->left->right=create(3);
    root->left->right->left=create(4);
    root->left->right->right=create(5);
    root->right=create(6);
    root->right->left=create(7);
    root->right->left->right=create(8);
    root->right->right=create(9);
    cout<<"Boundary traversal of the given binary tree is: "<<endl;
    printBoundary(root);
}
