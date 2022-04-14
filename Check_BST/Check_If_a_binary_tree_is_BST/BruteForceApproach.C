/*Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.
Note: Duplicate elements should be kept in the right subtree.*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// For taking input of binary tree
BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int maximum(BinaryTreeNode<int> *root)
{

    if (root == NULL)
    {
        // If root is NULL, then we simply return
        return INT_MIN; // -∞ (negative infinity)
    }

    // Otherwise returning maximum of left/right subtree and root’s data
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int minimum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        // If root is NULL, then we simply return
        return INT_MAX; // +∞ (positive infinity)
    }

    // Otherwise returning minimum of left/right subtree and root’s data
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    { // Base case
        return true;
    }
    int leftMax = maximum(root->left);   // Figuring out left’s maximum
    int rightMin = minimum(root->right); // Figuring out right’s minimum
    bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
    // Checked the conditions discussed above
    return output;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    cout << (isBST(root) ? "true" : "false");
}
/*
Input Format: The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have a left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.
Input: 3 1 5 -1 2 -1 -1 -1 -1
Output: true
Time Complexity: O(n*h)
Auxiliary Space: O(1) if Function Call Stack size is not considered, otherwise O(n)
*/