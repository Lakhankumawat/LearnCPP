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

  void print() {
    Node * temp = head;
    while (temp != NULL) {
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }

  void push(int data) {
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
  }
};

int main() {
  LinkedList listl;
  listl.push(1);
  listl.push(2);
  listl.push(3);
  listl.push(4);
  listl.push(5);
  listl.push(6);
  listl.push(7);
  listl.push(8);
  listl.push(9);
  listl.push(10);

  cout << "Given linked list\n";
  listl.print();

  listl.reverse();

  cout << "\nReversed Linked list \n";
  listl.print();
  return 0;
}
