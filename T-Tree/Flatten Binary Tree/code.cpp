#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
 
void flatten(Node* root) {
    
    if (root == NULL || (root->left == NULL &&
                        root->right == NULL))
        return;
    
    if (root->left != NULL) {
        flatten(root->left);

        Node* temp = root->right;
        root->right = root-> left;
        root->left = NULL;
 
        Node* t = root->right;

        while (t->right != NULL) 
            t = t->right;
        
        t->right = temp;
    }
 
    flatten(root->right);
}

void inorder(Node* root) {    //inorder will be printed
   
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data <<' ';
    inorder(root->right);
}
 
int main()
{
    /*    1
        /   \
       2     5
      / \     \
     3   4     6 */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
 
    flatten(root);
    inorder(root);

    return 0;
}