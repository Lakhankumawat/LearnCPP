// Vertical order traversal of a binary tree 
/* Approach - Since duplicate values can't be stored in map, maintain a vector to store all the nodes with same horizontal distance
            - Follow level order traversal as the node which is first vertically has to be printed first
Time complexity - O(n*logn), because level order traversal is used
*/
#include <vector>
#include <map>
#include <queue>
#include <unordered_map>
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

struct Node* conTree(int in[], int pre[], int start, int end, unordered_map<int, int>& mp)
{
    static int preIndex = 0;
 
    if (start > end)
        return NULL;
 
    //Finding root
    int curr = pre[preIndex++];
    Node *root = new Node(curr);
 
    if (start == end)
        return root;
 
    // Finding index of the root in Inorder traversal
    int inIndex = mp[curr];
 
    // Constructing left and right node
    root->left = conTree(in, pre, start, inIndex - 1, mp);
    root->right = conTree(in, pre, inIndex + 1, end, mp);
 
    return root;
}
 
// Wrapper function to call conTree()
struct Node *TreeWrap(int in[], int pre[], int n)
{
    // Store indexes of all items so that we
    // we can quickly find later
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[in[i]] = i;
 
    return conTree(in, pre, 0, n - 1, mp);
}

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
    int n;
    cout << "Enter number of nodes: " << "\n";
    cin >> n;

    /* NOTE - 
    To construct a binary tree we require both, inorder and preorder traversal
    */
    int in[n], pre[n]; 

    cout << "Enter Inorder traversal of the tree: " << "\n";
    for(int i = 0; i < n; i++)
        cin >> in[i];

    cout << "Enter Preorder traversal of the tree: " << "\n";
    for(int i = 0; i < n; i++)
        cin >> pre[i];
    
    // Constructing the binary tree
    Node *root = TreeWrap(in, pre, n);

    cout << "Vertical order traversal is \n";
    verticalTraversal(root);

    return 0;
}

// This code is contributed by Chahat Mittal