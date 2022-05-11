#include <iostream>
#include <stack>
using namespace std;

// node structure
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// zig zag traversal
void zigzagTraversal(node *root)
{
    // base condition

    if (!root)
    {
        return;
    }

    stack<node *> curlevel;  // For maintaning the printing order of current level
    stack<node *> nextlevel; // // For maintaning the printing order of next level
    bool LOR = true;

    curlevel.push(root); // Pushing the root node.

    while (!curlevel.empty()) // checking if current level is empty or not.
    {
        node *temp = curlevel.top(); // fetching the top element
        curlevel.pop();

        if (temp)
        {
            cout << temp->data << " ";
        }

        if (LOR) // As we know we have to traverse in zig zag order so , if LOR is true then we have traverse left to right otherwise in reverse.
        {
            if (temp->left) // First left node then right
            {
                nextlevel.push(temp->left);
            }
            if (temp->right)
            {
                nextlevel.push(temp->right);
            }
        }

        // When we have to traverse right to left.
        else
        {
            if (temp->right) // First right node
            {
                nextlevel.push(temp->right);
            }
            if (temp->left) // Then left node.
            {
                nextlevel.push(temp->left);
            }
        }
        if (curlevel.empty()) // If the current level is empty we swap the stacks and pop and print elements from the swaaped one
        {
            LOR = !LOR;
            swap(curlevel, nextlevel);
        }
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);
    cout << "\n\n--------------------------------------\n\n";
    cout << " ZigZag Order traversal of tree is :-\n\n";
    cout << " ";
    zigzagTraversal(root);
    cout << "\n\n--------------------------------------\n\n";
}
