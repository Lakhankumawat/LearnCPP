// What is Floor value in BST ?
/* Supoose we are given a 'key' value, The greatest value in the binary Search Tree that's smaller than the key
is called Floor Value */

#include <bits/stdc++.h>
using namespace std;
struct node
{ // Structure of every node of BST
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Insertion Values into BST
node *INSERTintoBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }

    while (true)
    {
        if (root->data <= val)
        {
            if (root->right != NULL)
            {
                root = root->right;
            }
            else
            {
                root->right = new node(val);
                break;
            }
        }

        else
        {
            if (root->left != NULL)
            {
                root = root->left;
            }
            else
            {
                root->left = new node(val);
                break;
            }
        }
    }
}

// Function to find floor value
int FloorInBst(node *root, int key)
{
    int floor = -1; // initial value of floor
    while (root)
    {
        if (root->data == key) // if value equal to key
        {
            floor = root->data;
            return floor;
        }
        if (key > root->data)
        { // if node value is less than key Go to right
            floor = root->data;
            root = root->right;
        }
        else
        { // if node value is greater than key Go to Left
            root = root->left;
        }
    }
    return floor;
}

int main()
{
    int nodes, val; //nodes=no of nodes
    cout<<"enter the number of nodes"<<endl;
    cin>>nodes;
    cout<<"enter 1st value"<<endl;
    cin>>val;
    struct node*root=new node(val);
    int i=nodes-1;
    while(i){
        cout<<"enter other  values"<<endl;
        cin>>val;
        INSERTintoBST(root,val);
        i--;
    }
    int key;
    cout<<"enter the key"<<endl;//input the key 
    cin>>key;

    cout<<"The Floor value in BST w.r.t to the key ->"<<endl;
    cout<<FloorInBst(root,key);
}



/* OUTPUT:


enter the number of nodes
6
enter 1st value
10
enter other  values
5
enter other  values
15
enter other  values
2
enter other  values
8
enter other  values
6
enter the key
14
The Floor value in BST w.r.t to the key ->
10


*/

/* BST looks Like
     10
    /  \
   5   15
  / \
 2  8
   /
  6
Lets Take the key=14 ,  So the Floor Value is =10
*/