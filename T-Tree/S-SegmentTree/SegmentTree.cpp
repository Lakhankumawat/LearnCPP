#include <bits/stdc++.h>
using namespace std;

void buildTree(int *arr, int *tree, int start, int end, int treeNode)
{
    if (start == end) // base case
    {
        tree[treeNode] = arr[start];
        return;
    }
    int mid = (start + end) / 2;                                  // finding hte middle point in array
    buildTree(arr, tree, start, mid, 2 * treeNode);               // building the tree
    buildTree(arr, tree, mid + 1, end, 2 * treeNode + 1);         // building the tree
    tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1]; // adding the two subtrees
}

void updateTree(int *arr, int *tree, int start, int end, int treeNode, int idx, int value)
{
    if (start == end) // base case
    {
        arr[idx] = value;
        tree[treeNode] = value; // updating the value in the tree
        return;
    }

    int mid = (start + end) / 2; // finding the middle point in the array
    if (idx > mid)
    {
        updateTree(arr, tree, mid + 1, end, 2 * treeNode, idx, value); // updating the right subtree
    }
    else
    {
        updateTree(arr, tree, start, mid, 2 * treeNode, idx, value); // updating the left subtree
    }
    tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1]; // updating the root
}
int query(int *tree, int start, int end, int treeNode, int left, int right) // query function
{
    if (start > right || end < left) // if the query is outside the range`
    {
        return 0;
    }

    if (start >= left && end <= right) // if the query is inside the range
    {
        return tree[treeNode]; // return the value of the root
    }

    int mid = (start + end) / 2;                                         // finding the middle point in the array
    int ans1 = query(tree, start, mid, 2 * treeNode, left, right);       // querying the left subtree
    int ans2 = query(tree, mid + 1, end, 2 * treeNode + 1, left, right); // querying the right subtree

    return ans1 + ans2; // returning the sum of the two subtrees
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1, 2, 3, 4, 5};
    int *tree = new int[10];

    buildTree(arr, tree, 0, 4, 1); // building the tree

    updateTree(arr, tree, 0, 4, 1, 2, 10); // updating the tree

    for (int i = 1; i < 10; i++)
    {
        cout << tree[i] << endl; // printing the tree
    }

    int ans = query(tree, 0, 4, 1, 2, 4);
    cout << "The sum between interval is " << ans << endl; // calculating the sum between interval

    return 0;
}