/*
                                                    RIGHT SIDE VIEW OF BT
TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(N)             where n is the number of nodes in the binary tree.

*/

/// Program for Right Side View of a Binary Tree

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// function to print Right view of binary tree

void printRightView(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // get number of nodes for each level
        int n = q.size();

        // traverse all the nodes of the current level
        while (n--)
        {
            Node *x = q.front();
            q.pop();

            // print the last node of each level
            if (n == 0)
                cout << x->data << " ";

            // if left child is not null push it into the queue
            if (x->left)
                q.push(x->left);

            // if right child is not null push it into the queue
            if (x->right)
                q.push(x->right);
        }
    }
}

int main()
{
    /*
    Let us create following BT
              1
           /     \
         2        3
       /   \    /    \
      6     7  5      4
           /    \
          9      8        */

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(6);
    root->left->right = newNode(7);
    root->left->right->left = newNode(9);
    root->right->right = newNode(4);
    root->right->left = newNode(5);
    root->right->left->right = newNode(8);

    printRightView(root);

    return 0;
}