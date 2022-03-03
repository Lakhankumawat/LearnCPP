// Vertical order traversal of a binary tree 
/* Approach - Since duplicate values can't be stored in map, maintain a vector to store all the nodes with same horizontal distance
            - Follow level order traversal as the node which is first vertically has to be printed first
// Time complexity - O(n*logn)
*/
#include <vector>
#include <map>
#include <queue>
#include <iostream>
using namespace std;

// Creating a binary node structure
// that stores data, pointer to left node
// and pointer to right node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Function to print vertical order traversal
// of the binary tree with given node
void verticalTraversal(Node *root)
{
    if (root == NULL)
        return;
    map<int, vector<int>> mp; // Stores unique horizontal distance (hdist) and all its corresponding nodes
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (q.empty() == false)
    {
        auto p = q.front();   // Getting first pair from the queue
        Node *curr = p.first; // Getting first element = node of the tree from the pair
        int hdist = p.second;
        mp[hdist].push_back(curr->data); // Storing the array of nodes with same hdist
        q.pop();
        if (curr->left != NULL)
            q.push({curr->left, hdist - 1}); // Pushing pair
        if (curr->right != NULL)
            q.push({curr->right, hdist + 1});
    }

    // Traversing the map and printing nodes at every horizontal distance (hdist)
    for (auto it : mp)
    {
        vector<int> vect = it.second;
        for (int x : vect)
            cout << x << " ";
        cout << '\n';
    }
}

/* Driver code*/
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->left->right = new Node(11);
    root->right->right->left->right->right = new Node(12);

    cout << "Vertical order traversal is \n";
    verticalTraversal(root);

    return 0;
}

// This code is contributed by Chahat Mittal