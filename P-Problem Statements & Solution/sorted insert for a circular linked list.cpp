// FCAI – Programming 1 – 2022 - Assignment 2  
// Program Name: sorted insert for a circular linked list.cpp 
// Program Description:sorted insert for a circular linked list ………  
//Author: ali sidat 
// Last Modification Date: 23/3/2022 
// Author1 and ID and Group:20210762  
// Teaching Assistant:  
// Purpose: githoub
/ C++ program for sorted insert 
// in circular linked list 
#include <bits/stdc++.h> 
using namespace std; 
 
/* structure for a node */ 
class Node 
{ 
 public: 
 int data; 
 Node *next; 
}; 
 
/* function to insert a new_node in a list in sorted way. 
Note that this function expects a pointer to head node 
as this can modify the head of the input linked list */ 
void sortedInsert(Node** head_ref, Node* new_node) 
{ 
 Node* current = *head_ref; 
  
 // Case 1 of the above algo 
 if (current == NULL) 
 { 
  new_node->next = new_node; 
  *head_ref = new_node; 
 } 
  
 // Case 2 of the above algo 
 else if (current->data >= new_node->data) 
 { 
  /* If value is smaller than head's value then 
  we need to change next of last node */ 
  while(current->next != *head_ref) 
   current = current->next; 
  current->next = new_node; 
  new_node->next = *head_ref; 
  *head_ref = new_node; 
 } 
  
 // Case 3 of the above algo 
 else 
 { 
  /* Locate the node before the point of insertion */ 
  while (current->next!= *head_ref && 
   current->next->data < new_node->data) 
  current = current->next; 
  
  new_node->next = current->next; 
  current->next = new_node; 
 } 
} 
 
/* Function to print nodes in a given linked list */ 
void printList(Node *start) 
{ 
 Node *temp; 
  
 if(start != NULL) 
 { 
  temp = start; 
  do { 
  cout<<temp->data<<" "; 
  temp = temp->next; 
  } while(temp != start); 
 } 
} 
 
/* Driver code */ 
int main() 
{ 
 int arr[] = {12, 56, 2, 11, 1, 90}; 
 int list_size, i; 
  
 /* start with empty linked list */ 
 Node *start = NULL; 
 Node *temp; 
  
 /* Create linked list from the array arr[]. 
  Created linked list will be 1->2->11->12->56->90 */ 
 for (i = 0; i< 6; i++) 
 { 
  temp = new Node(); 
  temp->data = arr[i]; 
  sortedInsert(&start, temp); 
 } 
  
 printList(start); 
  
 return 0; 
} 
 
// This code is contributed by rathbhupendra.



