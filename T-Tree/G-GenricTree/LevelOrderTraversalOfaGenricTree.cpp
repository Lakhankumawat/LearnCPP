
#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/n-ary-tree-level-order-traversal/

struct Node {
  int data;
  vector<Node*>children;
};

Node* newNode(int key) {
  Node* temp = new Node;
  temp->data = key;
  return temp;

}

Node* construct(int arr[], int n ) {
  Node* root = NULL;
  stack<Node*>st;
  for (int i = 0; i < n; i++) {
    if (arr[i] == -1) {
      st.pop();
    } else {
      Node* t = newNode(arr[i]);
      if (st.size() > 0) {
        st.top()->children.push_back(t);
      } else {
        root = t;
      }
      st.push(t);
    }
  }
  return root;
}

void levelorder(Node* node)
{
  if (node == NULL) return;
  queue<Node*> q;
  q.push(node);
  while (q.size() > 0)
  {
    Node* temp = q.front();
    q.pop();
    cout << temp->data << " " ;
    for (Node* child : temp->children)
    {
      q.push(child);
    }
  }
  cout << "." << endl;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  Node* root = construct(arr, n);
  levelorder(root);
}