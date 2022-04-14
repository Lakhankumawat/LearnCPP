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

class Triple
{
public:
    bool isBST;
    int minimum;
    int maximum;
};

/*This function will return object of Triple class
 containing bool value of isBST as well as overall minimum and maximum */
Triple isBST_helper(BinaryTreeNode<int> *root)
{
    Triple output;
    // Base Condition
    if (root == NULL)
    {
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    // Recursive Call
    Triple leftOutput = isBST_helper(root->left);
    Triple rightOutput = isBST_helper(root->right);

    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));

    bool isBSTfinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && (leftOutput.isBST) && (rightOutput.isBST);
    output.isBST = isBSTfinal;
    output.minimum = minimum;
    output.maximum = maximum;
    return output;
}
// Function to return bool value isBST
bool isBST(BinaryTreeNode<int> *root)
{
    Triple finaloutput = isBST_helper(root);
    return finaloutput.isBST;
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
Time Complexity: O(n)
Auxiliary Space: O(1) if Function Call Stack size is not considered, otherwise O(n)
*/
