// C++ program to insert, delete and search a node in AVL tree

#include<bits/stdc++.h>
using namespace std;
 
// AVL tree node
class Node
{
    public:
    int key;
    Node *left;
    Node *right;
    int height;
};
 
// function to get maximum of two integers
int max(int a, int b)
{
    return (a > b)? a : b;
}

// function to get the height of the tree
int height(Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
 
// function that allocates a new node 
Node* newNode(int key)
{
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; 
    return(node);
}
 
// function to right rotate subtree 
Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update heights
    y->height = max(height(y->left),height(y->right)) + 1;
    x->height = max(height(x->left),height(x->right)) + 1;
 
    return x;
}
 
// function to left rotate subtree 
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    // Update heights
    x->height = max(height(x->left),height(x->right)) + 1;
    y->height = max(height(y->left),height(y->right)) + 1;
 
    return y;
}
 
// function to get balance factor 
int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
 
// function to insert a key in node
Node* insert(Node* node, int key)
{
    
    if (node == NULL)
        return(newNode(key));
 
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else 
        return node;
 
    // update the height of current node
    node->height = 1 + max(height(node->left),height(node->right));
 
    // check whether the node is balance or not
    int balance = getBalance(node);
 
 
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
 
    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
 
    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
 
    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
 
    return node;
}

// function to get minimum key value node
Node * minValueNode(Node* node)
{
    Node* current = node;
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
 
// function to delete a node with given key from subtree with given root. 
Node* deleteNode(Node* root, int key)
{
     
    if (root == NULL)
        return root;

    // if key to be deleted is smaller than the root's key, then it lies in left subtree
    if ( key < root->key )
        root->left = deleteNode(root->left, key);

    // if key to be deleted is greater than the root's key, then it lies in right subtree
    else if( key > root->key )
        root->right = deleteNode(root->right, key);

    // if key to be deleted is same as root's key,
    else
    {
        // node with only one child or no child
        if( (root->left == NULL) || (root->right == NULL) )
        {
            Node *temp = root->left ? root->left : root->right;
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else 
            *root = *temp; 
                           
            free(temp);
        }

        // node with two children
        else
        {
            Node* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right,temp->key);
        }
    }
 
    if (root == NULL)
    return root;

    
    // update the height of current node
    root->height = 1 + max(height(root->left),height(root->right));

    // check whether the node is balance or not
    int balance = getBalance(root);
 
 
    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
 
    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
 
    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
 
    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
 
    return root;
}
 
// function to print preorder traversal of the tree.
void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
 
bool search(Node* root, int key)
{
    if (root == NULL)
        return false;
  
    // if found, return true
    else if (root->key == key)
        return true;

    // if the current node's value is greater than key
    else if (root->key > key) {
        bool val = search(root->left, key);
        return val;
    }
  
    // otherwise
    else {
        bool val = search(root->right, key);
        return val;
    }
}

int main()
{
    Node *root = NULL;

    int N;
    cout<<"\nHow many numbers you want to insert ? ";
    cin>>N;
    cout<<"\nEnter "<<N<<" numbers in AVL tree :\n";
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        root = insert(root,temp);
    } 
 
    /* 
    N=9
    input value : 9 5 10 0 6 11 -1 1 2 
    The constructed AVL Tree would be
             9
           /   \
          1     10
         / \      \
        0  5       11
       /  / \
      -1  2 6
    */
 
    cout<<"\nPreorder traversal of the constructed AVL tree is :\n";
    preOrder(root);
    cout<<"\n";

    int num;
    cout<<"\nEnter the number to delete from AVL tree :";
    cin>>num;
 
    root = deleteNode(root,num);
 
     /* The AVL Tree after deletion
             1
           /   \
          0     9
         /     /  \
       -1     5    11
             / \
            2   6
    */
 
    cout<<"\nPreorder traversal after deletion of "<<num<<"\n";
    preOrder(root);
    cout<<"\n";

    int numsearch;
    cout<<"\nEnter the number to be searched ";
    cin>>numsearch;
    bool after = search(root,numsearch);
    if (after)
        cout<<"value "<<numsearch<<" found\n";
    else
        cout<<"value "<<numsearch<<" not found\n";
    return 0;
}

/*
  Time Complexity :
  insert : O(logn)
  delete : O(logn)
  search : O(logn)
*/
