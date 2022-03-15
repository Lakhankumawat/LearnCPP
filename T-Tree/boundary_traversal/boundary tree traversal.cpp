#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
        // Get the current node's value from the string
        string currVal = ip[i];
        // If the left child is not null
        if(currVal != "N") {
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
public:
   //to check if the node is a leaf node
    bool isleaf(Node *root)
    {
        return !root->left && !root->right;
    }
    //function to push left boundary node values to ans vector
    void left(Node *root, vector<int> &ans)
    {
        Node *curr=root->left;
        // curr pointer pointing to root->left
        while(curr)
        {
          //push only if it is not a leaf node
            if(!isleaf(curr))
            ans.push_back(curr->data);
            //if curr->left exsists then it is the left boundary otherwise curr->right
            if(curr->left)
            {
                curr=curr->left;
            }
           else
           curr=curr->right;
        }
    }
    //function to push all the leaf node values to the ans vector
    void leaf(Node *root, vector<int> &ans)
    {
       //pushing the value  if the node is leaf
        if(isleaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        //first root->left is called because given to find anticlockwise boundary traversal
        if(root->left)leaf(root->left,ans);
        if(root->right)leaf(root->right,ans);
    }
    //function to push left boundary node values to ans vector
     void right(Node *root, vector<int> &ans)
    {
      //for the right boundary as it is anticlockwise we need the values in reverse order
      // so first we take a temp vector to store values and use temp to store it correctly in ans vector
         vector<int> temp;
        Node *curr=root->right;
        while(curr)
        {

            if(!isleaf(curr))
            temp.push_back(curr->data);
            // if curr->right exsists then it is the right boundary else curr->left is the
            //right boundary
            if(curr->right)
            {
                curr=curr->right;
            }
           else
           curr=curr->left;
        }
        //storing the values in ans vector from temp in reverse order
        for(int i=temp.size()-1;i>=0;i--)
        {
            ans.push_back(temp[i]);
        }
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(!root) return ans;
        if(!isleaf(root))ans.push_back(root->data);
        //anticlockwise direction so left then leaf then right
        left(root,ans);
        leaf(root,ans);
        right(root,ans);
        return ans;
    }
};
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
} 
