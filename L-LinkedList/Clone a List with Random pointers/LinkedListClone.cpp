#include <iostream>
#include <unordered_map>
using namespace std;
//**********----------Cloning the list using the random pointers----------*************//
class Node {
public:
	int data;
	Node* next;
	Node* rand;
	Node(int val) {
		data = val;
		next = NULL;
		rand = NULL;
	}
};
//print list
void print(Node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
void insertAtTail(Node*& head, Node*& tail, int key) {
	Node* newnode = new Node(key);
	if (head == NULL) {
		head = newnode;
		tail = head;
		return;
	}
	tail->next = newnode;
	tail = newnode;
}

void append(Node*& head, int key) {
	Node* newnode = new Node(key);
	Node* last = head;
	newnode->next = NULL;

	if (head == NULL) {
		head = newnode;
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = newnode;
	return;

}
Node* clone(Node* head) {
	//Concept

//Step 1: clone the list
/*

original List =  1 -> 2 -> 3 -> 4
  cloned List =  1 -> 2 -> 3 -> 4

*/

	Node* cloneHead = NULL;
	Node* cloneTail = NULL;
	Node* temp = head;
	while (temp != NULL) {
		insertAtTail(cloneHead, cloneTail, temp->data);
		temp = temp->next;
	}

	//Step 2: create the mapping
	/*      original List = 1 -> 2 -> 3 -> 4
							|	 |	  |    |
							|    |    |    |
			  cloned List = 1 -> 2 -> 3 -> 4
	*/
	unordered_map<Node*, Node*>map;
	temp = head;
	Node* temp2 = cloneHead;
	while (temp != NULL) {
		map[temp] = temp2;
		temp = temp->next;
		temp2 = temp2->next;
	}
	temp = head;
	temp2 = cloneHead;
	while (temp != NULL) {
		temp2->rand = map[temp->rand];
		temp = temp->next;
		temp2 = temp2->next;
	}
	return cloneHead;
}
int main()
{
	//Basic list
	Node* root = NULL;

	cout << "Enter the total number of nodes " << endl << "->";
	int n;
	cin >> n;
	while (n--) {
		int val;
		cout << "Enter node's value" << endl << "->";
		cin >> val;
		append(root, val);
	}
		cout << "original list : ";
		print(root);

		Node* ans = clone(root);
		cout << "cloned  list : ";
		print(ans);

}
