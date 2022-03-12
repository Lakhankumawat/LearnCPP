// Top view of Binary tree
/* Top view of a binary tree is the nodes visible when the tree is viewed from the top.
A node is there in the output if it's the topmost node in it's vertical line.
*/
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 
/* Recursive function to construct binary tree of size
len from Inorder traversal in[] and Preorder traversal
pre[]. Initial values of inStrt and inEnd should be
0 and len -1. */
struct Node* buildTree(int in[], int pre[], int inStrt, int inEnd, unordered_map<int, int>& mp)
{
    static int preIndex = 0;
 
    if (inStrt > inEnd)
        return NULL;
 
    /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
    int curr = pre[preIndex++];
    struct Node* tNode = newNode(curr);
 
    /* If this node has no children then return */
    if (inStrt == inEnd)
        return tNode;
 
    /* Else find the index of this node in Inorder traversal */
    int inIndex = mp[curr];
 
    /* Using index in Inorder traversal, construct left and
    right subtress */
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1, mp);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd, mp);
 
    return tNode;
}
 
// This function mainly creates an unordered_map, then calls buildTree()
struct Node* buildTreeWrap(int in[], int pre[], int len)
{
    // Store indices of all items so that we can quickly find later
    unordered_map<int, int> mp;
    for (int i = 0; i < len; i++)
        mp[in[i]] = i;
 
    return buildTree(in, pre, 0, len - 1, mp);
}

// This function finds the top view of the created binary tree
void TopView(Node *root){
    if(root == NULL)
        return;
    map<int, int> mp;
    queue<pair<Node *, int>> q; // For level order traversal
    q.push( {root, 0} );
    while(q.empty() == false){
        auto p = q.front();
        Node *curr = p.first;
        int val = curr->data;
        int hdist = p.second;
        q.pop();
        if(mp.find(hdist) == mp.end())
            mp[hdist] = val;
        if(curr->left != NULL)
            q.push( {curr->left, hdist - 1} );
        if(curr->right != NULL)
            q.push( {curr->right, hdist + 1} );
    }
    for(auto it : mp)
        cout << it.second << " ";
}

int main(){
    int len;
    cout << "Enter no. of nodes - " << endl;
    cin >> len;
    // To build the specific required binary tree
    // We require both, inorder and preorder traversal of it
    int in[len], pre[len]; 
    cout << "Enter nodes in inorder: " << endl;
    for(int i = 0; i < len; i++)
        cin >> in[i];
    cout << "Enter nodes in preorder: " << endl;
    for(int i = 0; i < len; i++)
        cin >> pre[i];
    Node* root = buildTreeWrap(in, pre, len); // To create the binary tree
    cout << "Top View of binary tree:" << endl;
    TopView(root); // To print the topview
    return 0;
}

// This code is contributed by Chahat Mittal