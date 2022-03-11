#include <bits/stdc++.h>
using namespace std;

// ref: https://www.geeksforgeeks.org/diameter-of-a-binary-tree/

// structure of node
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data, node *left, node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class ppair
{
public:
    node *root;
    int state;

    ppair(node *root, int state)
    {
        this->root = root;
        this->state = state;
    }
};

void constructTree(node *&root, vector<int> &arr)
{
    root = new node(arr[0], NULL, NULL);
    ppair *rootpair = new ppair(root, 1);
    stack<ppair *> st;
    st.push(rootpair);
    int idx = 0; // to read arrray pointing to root
    while (st.size() > 0)
    {
        ppair *topp = st.top();
        if (topp->state == 1)
        {
            idx++;
            if (arr[idx] != -1)
            {

                topp->root->left = new node(arr[idx], NULL, NULL);
                ppair *leftpair = new ppair(topp->root->left, 1);
                st.push(leftpair);
            }
            else
            {
                topp->root->left = NULL;
            }

            topp->state++;
        }

        else if (topp->state == 2)
        {
            idx++;
            if (arr[idx] != -1)
            {

                topp->root->right = new node(arr[idx], NULL, NULL);
                ppair *rightpair = new ppair(topp->root->right, 1);
                st.push(rightpair);
            }
            else
            {
                topp->root->right = NULL;
            }

            topp->state++;
        }
        else
        {
            st.pop();
        }
    }
}
int height(node *root)
{
    if (root == NULL)
    {
        return -1; //return -1 when u measuring height wrt to edge and return 0 if ur measuring height wrt node
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int totalheight = max(leftheight, rightheight) + 1;
    return totalheight;
}
/// with time complexity n^2
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ld = diameter(root->left);                         //max distance betwen two node on left side
    int rd = diameter(root->right);                        //max distance betwen two node on right side
    int lr = height(root->left) + height(root->right) + 2; //max distance between left deepest and right deepest

    int diameter = max(lr, max(ld, rd));
    return diameter;
}




int main()
{

    int n;
    cin >> n;

    node *root;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        if (temp == "n")
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = stoi(temp);
        }
    }

    constructTree(root, arr);
    cout << "diameter of binary tree is: " << diameter(root) << endl;
}