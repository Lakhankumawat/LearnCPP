#include <bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/largest-bst-binary-tree-set-2/

class Node
{
public:
  int data = 0;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(int data)
  {
    this->data = data;
  }
};

// making own pair class to know state of the node
class Pair {
public:
  Node* node = nullptr;
  int state = 0;

  Pair(Node* node, int state) {
    this->node = node;
    this->state = state;
  }
};

int idx = 0;
Node* constructTree(vector<int>& arr)
{

  if (idx == arr.size() || arr[idx] == -1)
  {
    idx++;
    return nullptr;
  }
  Node* node = new Node(arr[idx++]);
  node->left = constructTree(arr);
  node->right = constructTree(arr);
  return node;
}


// class bst 
class bst {
public:
  bool isbst = false;
  int max = 0;
  int min = 0;
  Node* root = nullptr;
  int size = 0;
};

// function BST of type class bst
bst Bst(Node* node) {

  if (node == nullptr)
  {
    bst bres;
    bres.isbst = true;
    bres.max = INT_MIN;
    bres.min = INT_MAX;
    return bres;
  }

  // finding bst from left subtree
  bst l = Bst(node->left);

  //finding bst from right subtree
  bst r = Bst(node->right);

  bst ans;

  ans.max = max(node->data, max(l.max, r.max));
  ans.min = min(node->data, min(l.min, r.min));

  if (l.isbst == true && r.isbst == true && (l.max < node->data && r.min > node->data)) {
    ans.isbst = true;
  }

// root node is bst and hence size and root is assigned to ans
  if (ans.isbst == true)
  {
    ans.root = node;
    ans.size = l.size + r.size + 1;
  }

// since we are calculating largest subtree hence size and root will be  assigned to "ans" acciordingly.

// left size dominates hence ans will be assigned here
  else if (l.size > r.size)
  {
    ans.root = l.root;
    ans.size = l.size;
  }

  // right size dominates hence ans will be assigned here
  else
  {
    ans.root = r.root;
    ans.size = r.size;
  }

  return ans;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (tmp == "n") {
      arr[i] = -1;
    } else {
      arr[i] = stoi(tmp);
    }
  }

  Node* root = constructTree(arr);

  bst r = Bst(root);
  cout <<"value of root node of the largest bst subtree is: "<< r.root->data << " and it's size is: " << r.size;



}
