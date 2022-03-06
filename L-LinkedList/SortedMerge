#include <iostream>
using namespace std;
//Program to combine two linked lists and print the elements in sequential order
struct Node {
	int data;
	struct Node* next;
};//struct Node

// Function to create newNode in a linkedlist
Node* newNode(int key)
{
	struct Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}//newNode

// A utility function to print linked list
void printList(Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}//while
}//printlist

// Merges two given lists in-place. This function
// mainly compares head nodes and calls mergeUtil()
Node* SortedMerge(Node* list1, Node* list2)
{
	if (!list1){
		return list2;
    }//if!list1
	if (!list2){
		return list1;
    }//!list2
	// start with the linked list
	// whose head data is the least
	if (list1->data < list2->data) {
		list1->next = SortedMerge(list1->next, list2);
		return list1;
	}//if list1 < list 2
	else {
		list2->next = SortedMerge(list1, list2->next);
		return list2;
	}//else
}//SortedMerge

int main()
{
	Node* l1 = newNode(1);
	l1->next = newNode(3);
	l1->next->next = newNode(7);

	// 1->3->7

	Node* l2 = newNode(2);
	l2->next = newNode(4);
	l2->next->next = newNode(6);

	// 2->4->6

	Node* merge = SortedMerge(l1, l2);

	printList(merge);
	return 0;
}///int main
