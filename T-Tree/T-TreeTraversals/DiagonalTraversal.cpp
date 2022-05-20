/*                                                    DIAGONAL TRAVERSAL PROGRAM
 TIME COMPLEXITY : O(N)
 SPACE COMPLEXITY : O(N)        Note : N is the size of the binary tree in space complexity

 Link to the Article for reference :  https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/ 

 */



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
struct Node
{
    int value;
    Node *left, *right;
 
    Node(int value)
    {
        this->value = value;
        this->left = this->right = NULL;
    }
};
 
// Perform preorder traversal on the tree & fill the map with diagonal elements
void printDiagonal(Node* node, int diagonal, auto &map)
{
    
    if (!node)  return;
 
    // insert the current node into the current diagonal
    map[diagonal].push_back(node->value);
 
    // call the left subtree 
    printDiagonal(node->left, diagonal + 1, map);
 
    // call the right subtree 
    printDiagonal(node->right, diagonal, map);
}
 
// Function to print the diagonal elements 
void printDiagonal(Node* root)
{
    unordered_map<int, vector<int>> map;
 
    // perform preorder traversal on the tree and fill the map
    printDiagonal(root, 0, map);
 
    // traverse the map and print the diagonal elements
    for (int i = 0; i < map.size(); i++)
    {
        for (int j: map[i]) {
            cout << j <<" ";
        }
        cout << endl;
    }
}
 
int main()
{
    /* Let's see this example
    
              1
            /   \  
           /     \ 
          2        3
         /      /     \
        /      /       \
       4      5         6
             / \       /
            /   \     /
           7     8   9
               
    */
 
    Node* root = new Node(1);
    
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
     root->right->right->left = new Node(9);
 
    printDiagonal(root);
 
    return 0;
}