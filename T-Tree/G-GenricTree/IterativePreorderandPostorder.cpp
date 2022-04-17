
#include<bits/stdc++.h>
using namespace std;

// covers both preorder as well as postorder iterartive traveral medium level problem from gfg.
// https://www.geeksforgeeks.org/iterative-preorder-traversal-of-a-n-ary-tree/
// https://www.geeksforgeeks.org/iterative-postorder-traversal-of-n-ary-tree/

class Node {
public:
  int data;
  vector<Node*>children;
};

void iterativePreAndPostOrder(Node* root) {
  stack<pair<Node*, int>>st;
  st.push({root, -1});
  string preorder;
  string postorder;
  while (st.size() > 0) {
    pair<Node*, int> top = st.top();
    st.pop();
    if (top.second == -1) {
      preorder += to_string(top.first->data) + " ";
      top.second++;
      st.push(top);
    }
    else if (top.second >= 0 and top.second < top.first->children.size()) {
      pair<Node*, int> cp(top.first->children[top.second], -1);
      top.second++;
      st.push(top);
      st.push(cp);
    }
    else {
      postorder += to_string(top.first->data) + " ";
    }
  }
  cout << preorder << endl;
  cout << postorder << endl;
}

Node* construct(vector<int>& arr) {
  Node* root = nullptr;

  stack <Node*> st;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == -1) {
      st.pop();
    } else {
      Node* t = new Node();
      t->data = arr[i];

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

int main() {
  int n, x;
  cin >> n;
  vector<int>arr;
  for (int i = 0; i < n; i++) {
    cin >> x;
    arr.push_back(x);
  }
  Node* root = construct(arr);
  iterativePreAndPostOrder(root);
}
