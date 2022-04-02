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
		cout << head->data<<" ";
		head = head->next;
	}
}
void insertAtTail(Node*& head, Node*&tail,int key) {
	Node* newnode = new Node(key);
	if (head == NULL) {
		head = newnode;
		tail = head;
		return;
	}
	tail->next= newnode;
	tail = newnode;
}

Node* clone(Node*head) {
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
	Node* root = new Node(1);
	Node* second = new Node(2);
	Node* third = new Node(3);
	Node* fourth = new Node(4);
	Node* fifth = NULL;

	root->next = second;
	root->rand = fourth;
	second->next = third;
	second->rand = root;
	third->next = fourth;
	third->rand = second;
	fourth->next = fifth;
	fourth->rand = third;
	print(root);

	clone(root);

}
