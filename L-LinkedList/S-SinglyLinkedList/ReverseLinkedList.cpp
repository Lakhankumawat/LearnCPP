/*Program to reverse a linked list.*/
#include <iostream>

using namespace std;

class Node {
  public:
    int data;
  Node * next;
  Node(int data) {
    this -> data = data;
    next = NULL;
  }
};

class LinkedList {
  public:
    Node * head;
  LinkedList() {
    head = NULL;
  }

//Function to reverse the linked list
  void reverse() {
    Node * current = head;
    Node * prev = NULL, * next = NULL;

    while (current != NULL) {
      next = current -> next;

      current -> next = prev;

      prev = current;
      current = next;
    }
    head = prev;
  }

  //Function to reverse the linked list using recursion
  void reverse_ll_using_recursion(Node* node){
  	if(node->next == 0){
  		head = node;
  		return;
  	}
  	reverse_ll_using_recursion(node->next);
  	node->next->next = node;
  	node->next = NULL;
  }

//Function to reverse a linked list using stack
  void reverse_ll_using_stack(){
  	stack<Node* > s;
  	Node* tmp = head;
  	while(tmp){
  		s.push(tmp);
  		tmp = tmp->next;
  	}
  	head = s.top();
  	s.pop();
  	tmp = head;
  	while(!(s.empty())){
  		tmp->next = s.top();
  		s.pop();
  		tmp = tmp->next;
  	}
  	tmp->next = 0;
  }

//Function to print the linked list
  void print() {
    Node * temp = head;
    while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }

//Function to Insert values to Linked List
  void push(int data) {
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
  }
};


//Driver Function
int main() {
  LinkedList listl;
  int n,k;
  cout << "Enter the number of nodes in linked list: ";
  cin >> n;
  cout << "Enter the nodes: ";
  for(int i=1;i<=n;i++){
    cin >> k;
    listl.push(k);
  }

  cout << "Given linked list\n";
  listl.print();

  listl.reverse();

  cout << "\nReversed Linked list \n";
  listl.print();

  listl.reverse_ll_using_recursion(listl.head);
  cout<<"\nReversed Linked list using recursion \n";
  listl.print();

  listl.reverse_ll_using_stack();
  cout<<"\nReversed Linked list using stack \n";
  listl.print();
  
  return 0;
}
