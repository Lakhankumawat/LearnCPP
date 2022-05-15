#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

/*

eg:
         1
       /   \
      2      3
     / \    / \
    4   5  6   7

    preorder: 1 2 4 5 3 6 7
    postorder: 4 5 2 6 7 3 1
    inorder: 4 2 5  1 6 3 7


*/

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "PREORDER: ";
    preorder(root);
    cout << endl;

    cout << "POSTORDER: ";
    postorder(root);
    cout << endl;

    cout << "INORDER: ";
    inorder(root);
    cout << endl;

    return 0;
}