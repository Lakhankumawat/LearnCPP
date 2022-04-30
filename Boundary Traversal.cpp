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
/* Solve 3 cases for this problem  : 
Case 1 : Print Left boundary excluding leaf nodes
Case 2 : Print Leaf Nodes using Inorder Traversal
Case 3 : Print Right boundary excluding leaf nodes but in Reversed direction */

void leftView(Node * root , vector<int>&ans)
{ 
   if(root == NULL) return ;  
   if(root -> left == NULL and root -> right == NULL ) return ;  
   
   ans.push_back(root -> data) ;  
   leftView(root -> left , ans) ;  
    
   if(root -> left == NULL )
   {
       leftView(root -> right , ans ) ;  
       return ;  
   }
   return ;  
}

void leafNodes(Node * root , vector<int> & ans){
   if(root == NULL) return ;  
   
   if(root -> left == NULL and root -> right == NULL)
   {
       ans.push_back(root->data) ;  
       return ;  
   }
   leafNodes(root -> left , ans) ;  
   leafNodes(root -> right , ans) ;  
   return ;  
}

void rightView(Node * root , vector<int> & ans)
{
   if(root == NULL) return ;  
   
   if(root->right == NULL and root -> left == NULL) return ;  
   
   rightView(root -> right, ans) ;  
    
   if(root -> right == NULL) rightView(root -> left , ans) ;  
   
   ans.push_back(root -> data) ;  
   return ;  
}

vector <int> boundary(Node *root)
{
   vector<int> ans;  
   if(!root) return ans ;  
   ans.push_back(root -> data) ;  
    
   if(root -> left) leftView(root->left , ans) ;  
   
   leafNodes(root->left, ans) ;  
   leafNodes(root -> right , ans) ;  
    
   if(root -> right) rightView(root -> right , ans ) ;  
   
   return ans ;  
}

};



//  Driver Code Starts.

int main() 
{
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