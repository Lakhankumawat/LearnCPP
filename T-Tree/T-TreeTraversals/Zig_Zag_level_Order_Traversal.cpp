#include <iostream>
#include <stack>
using namespace std;

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

void zigzagTraversal(node *root)
{
    if (!root)
    {
        return;
    }

    stack<node *> curlevel;
    stack<node *> nextlevel;
    bool LOR = true;

    curlevel.push(root);

    while (!curlevel.empty())
    {
        node *temp = curlevel.top();
        curlevel.pop();

        if (temp)
        {
            cout << temp->data << " ";
        }

        if (LOR)
        {
            if (temp->left)
            {
                nextlevel.push(temp->left);
            }
            if (temp->right)
            {
                nextlevel.push(temp->right);
            }
        }

        else
        {
            if (temp->right)
            {
                nextlevel.push(temp->right);
            }
            if (temp->left)
            {
                nextlevel.push(temp->left);
            }
        }
        if (curlevel.empty())
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
