
/* A Binary-Tree Data Structure based problem statement 
   which focuses on computing the diameter of the Binary-Tree taken as an input */

/* Complexities -: 
   1.Time Complexity - O(N), N - Number of nodes in a Binary-Tree.
   2.Space Complexity - O(H), H - Height of the Binary-Tree.
*/

#include<iostream>
#include<queue>
using namespace std;
template<typename type>


// Class to store the individual nodes of the Binary-Tree // 

class binaryTreeNode
{
    public:
    type data;
    binaryTreeNode<type> *left, *right;
    binaryTreeNode(type data)
    {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
    ~binaryTreeNode()
    {
        delete this -> left;
        delete this -> right;
    }
};

/* A function that returns the root of the Binary-Tree, the function takes Level-Wise input
   from the user using Queue Data Structure */
   
binaryTreeNode<int>* takeinput()
{
    int data;
    cin >> data;
    binaryTreeNode<int> *root = new binaryTreeNode<int>(data);
    queue<binaryTreeNode<int>*>pending;
    pending.push(root);
    while(!pending.empty())
    {
        binaryTreeNode<int> *front = pending.front();
        pending.pop();
        cin >> data;
        if(data != -1)
        {
            binaryTreeNode<int> *newnode = new binaryTreeNode<int>(data);
            pending.push(newnode);
            front -> left = newnode;
        }
        else
        {
            front -> left = nullptr;
        }
        cin >> data;
        if(data != -1)
        {
            binaryTreeNode<int> *newnode = new binaryTreeNode<int>(data);
            pending.push(newnode);
            front -> right = newnode;
        }
        else
        {
            front -> right = nullptr;
        }
    }
    return root;
}

/* The function Diameter computes the Diameter of the Binary-Tree by returning the height and the Diameter both at the same time
   which saves the time complexity of computation to great extent using inbuilt 'pair' class of C++ */
   
//first = height, second = diameter and take root of the Binary-Tree as an input.

pair<int, int> Diameter(binaryTreeNode<int> *root)
{
    if(root == nullptr){
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    // Recursive approach to get the results from the left sub-tree.
    pair<int, int> left = Diameter(root -> left);
    // Recursive approach to get the results from the right sub-tree.
    pair<int, int> right = Diameter(root -> right);
    int leftHeight = left.first;
    int leftDiameter = left.second;
    int rightHeight = right.first;
    int rightDiameter = right.second;
    // Resulting Diameter and Height w.r.t to the root of the tree.
    pair<int, int> output;
    output.first = max(leftHeight, rightHeight) + 1;
    output.second = max(leftDiameter, max(rightDiameter, leftHeight + rightHeight));
    return output;
}

/* main function to take input from the user and to display the resulting Diameter */

    /* Let us create following Binary-Tree
             100
           /     \
          200    300
         /  \    /  \
       400   500 600  700 */

/* Expected Results -:
   Diameter of the Binary Tree is as follows -:
   4 
*/ 

int main()
{
    binaryTreeNode<int> *root = takeinput();
    pair <int, int> p = Diameter(root);
    cout << "Diameter of the Binary Tree is as follows -: \n" << p.second; 
    return 0; 
}

