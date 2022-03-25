#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/diameter-n-ary-tree/

class Node
{
public:
    int data;
    vector<Node*> children;
};

// defining a static variable dia,which stores the value of greatest diameter found so far.
int dia = 0;

// the function diameter basically calculate the diameter and update it if required but return the height. And as a parameter, a Node is passed.
int diameter(Node *root)
{

    int ht = -1;

    int sh = -1;

    // checking different conditions
    for (auto child : root->children)
    {
        int ch = diameter(child);
        if (ch >= ht)
        {
            sh = ht;
            ht = ch;
        }
        else if (ch >= sh)
        {
            sh = ch;
        }
    }

    if (sh + ht + 2 > dia)
    {
        dia = sh + ht + 2;
    }

    ht += 1;
    return ht;
}

Node *construct(vector<int> &arr)
{
    Node *root = nullptr;

    stack<Node *> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

            if (st.size() > 0)
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }
    return root;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    Node *root = construct(arr);
    dia = 0;
    diameter(root);
    cout<<"Diameter of genric tree is: " << dia << endl;
}