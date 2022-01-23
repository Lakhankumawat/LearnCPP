
/// Program for creating preorder traversal in a binary search tree - root left right

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    struct Node *left, *right, *root;
};

struct Node *createNode(int val)
{

    struct Node *newNode = new Node;
    newNode->value = val;
    newNode->left = newNode->right = NULL;
    newNode->root = NULL;
    return newNode;
}

///---------------------Main Function--------------------------///
///preOrder Traversal of Binary Tree
void preOrderTraversal(Node *head)
{

    if (head == NULL)
        return;

    cout << head->value << " ";

    preOrderTraversal(head->left);

    preOrderTraversal(head->right);
}

struct Node *insertNode(Node *head, int val)
{
    if (head == NULL)
        return createNode(val);

    if (head->value > val)
    {
        Node *lchild = insertNode(head->left, val);
        head->left = lchild;
        lchild->root = head;
    }
    else if (head->value < val)
    {
        Node *rchild = insertNode(head->right, val);
        head->right = rchild;
        rchild->root = head;
    }
    return head;
}

// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct Node *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // print inorder traversal of the BST
    preOrderTraversal(root);

    return 0;
}