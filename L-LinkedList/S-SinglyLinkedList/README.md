
<!-- Table of content -->
# Table of content
  - [Singly Linked list](#singly-linked-list)
    - [Creating singly linked list](#creating-singly-linked-list)
    - [Displaying the Singly Linked List](#displaying-the-singly-linked-list)
    - [Inserting a node](#inserting-a-node)
    - [Inserting a node at nth position](#inserting-a-node-at-nth-position)
    - [Deleting a node](#deleting-a-node)
  - [Segregate Even Odd](#segregate-even-odd)
  - [Palindrome linked list](#palindrome-linked-list)
  - [Middle Element of the linked list](#middle-element-of-the-linked-list)
  - [Reverse a linked list](#reverse-a-linked-list)
  - [Searching in a linked list](#searching-in-a-linked-list)
  - [Removing Duplicates](#removing-duplicates)
    - [Algorithm](#removing-duplicates)
    - [Properties](#removing-duplicates)
    - [Advantages](#removing-duplicates)
    - [Disadvantages](#removing-duplicates)


# Singly Linked List 

* Create a SLL 
* Display a SLL 
* Insert a node in SLL 
* Delete a node in SLL 

## Creating Singly Linked List 

### Steps  
* Create an array and store elements in array.
* Create nodes using malloc function and store elements of array in Linked List. 

### Space Complexity

* Extra space is used to store elements of LL in array.  
* Space Complexity : O(n) 

## Displaying the Singly Linked List 

### Steps

* Use the pointer and display node data until node becomes null.

### Time Complexity

* Displaying the first node: O(1) 
* Displaying a node in between: O(n) 
* Displaying the last node: O(n) 

### Space Complexity

* No extra space is used.   
* Space Complexity: O(1)  

## Inserting a node

### Steps 

* Inserting a node at first position will shift first or head pointer to new node.
* For inserting a node in between, bring temporary pointer p to the position. 

##### Inserting at first position : 

![Linkedlist_insert_at_start](https://user-images.githubusercontent.com/81226536/157304956-2cee37f1-5cda-455a-ad4a-477b74cdad01.png) 


## Inserting a node at nth position
To insert a node at nth position, we need to follow these steps-
* Create a new node
* Iterate to the previous of the nth node
* Set newnode's ‘next’ pointer to the ‘next’ pointer of the previous of the nth node
* Set previous node's next to the new node
* Return the head pointer

### Time Complexity
* Insertion at head node - O(1).
* Insertion at last node - O(n).
* Insertion in middle - O(n). 

### Space Complexity
* Space complexity: O(1).


##### Image to show the insertion at nth position:

![insertion-in-singly-linked-list-at-beginning](https://user-images.githubusercontent.com/86103131/157711281-4a6a00be-1a58-4fca-af71-e5b5a1a31e89.png)

## Deleting a node

### Steps

* Find the previous node of the node to be deleted. 
* Change the next of the previous node. 
* Free memory for the node to be deleted.


##### Deleting a node  : 

![Linkedlist_deletion](https://user-images.githubusercontent.com/81226536/157306410-645f3871-7d8d-4f01-8492-66862d6da268.png) 

### Time Complexity 

* Deleting the first node => O(1) 
* Deleting a node in between => O(n) 
* Deleting the last node => O(n) 

### Space Complexity 

No extra space is used.   
Space Complexity : O(1)

***
# Segregate Even Odd

The Problem Statement : Give a Linked List of integer, write a function to modify the linked list such that all even numbers appear before all the odd numbers in the modified linked list. Also, keep the order of even and odd numbers the same

### Task perform 
- Comparision Linkedlist elements
- Insertion a node in Linkedlist in Front
- Insertion a node in Linkedlist in End


### Explanation 
 - First Step is we take a length of LinkedList as input.
 - Second Step is to take input of the Head Node.
 - Pointing tail and head to the Head node.
 - Create a for loop in length -1 times because we alrady take the head.
 - We create a function who compair the input element passing with Head and tail  with the input data.
 -  Oddevenchecker funciton to check if the data is odd the call InsertAtTail function to Insert in End of the Head Node of the LinkedList. Or if the data is even the call InsertAtHead function to insert Node in Front Head of the LinkedList.
 - After all thing call function print to print LinkedList.

![screenshot-185-7838](https://user-images.githubusercontent.com/55774240/158155742-e661bcba-296a-47f8-b43f-bd65c603d053.png)
### Algorithm

```
Write Pseudo code for your algorithm here
```

### Properties

- Time Complexity : Insert element at front O(1), Insert element at end O(N) = O(N)
- Auxillary Space : No extra space used = O(1)

### Advantages

- 

### Disadvantage

- 


***
# Palindrome linked list
In this approach, I have used a stack to store all the elements after the middle
element so that We have to compare only (n/2)-1 elements to find out the list is palindrome or not.

### Algorithm

* Find the middle node of the linked list
* Add all the elements after the middle element in the stack
* Compare the elements of the linked list with the top element of the stack
* If the element of the stack and the linked list is same,
  Iterate to the next element in the linked list and pop the element of the stack
* Repeat 4th point till stack is empty (or we have reached the middle element of the list)
* If we have successfully popped all the element of the stack, Return 1

  Else Return 0

### Time Complexity

* The time complexity of this approach will be O(n)
  - But we have to compare only (n/2)-1 time as we have stored all the elements after the middle in the stack and we are comparing 
    the elements of the linked list only till the previous of the middle node.

### Space Complexity

* Space complexity will be O(n) as we are using a stack to store the elelments of the linked list.

### Advantages

* Less comparison
* Easy approach

### Disadvantage
* Takes O(n) Auxilary space.
***
# Middle element of the linked list
I have used two pointers approach to find the middle element of the linked list, in this we have to do only n/2 comparisions

### Algorithm
* Initialize two pointers i.e one is slow and one is fast and set them to head of the list
* Iterate in the list until fast or fast->next pointer becomes null, make slow = slow->next and fast = fast->next->next
* After while loops terminates, the slow pointer will be pointing at the middle node of the list
* Return slow->data

### Time complexity

- The time complexity will be O(n). But we have to do only n/2 comparisions in this approach

### Space complexity

* Space complexity will be O(1) as it is not taking any extra space in the program
### Advantage

- This approach is very efficient as only n/2 comparision is done.
##### Image for reference:
![image](https://user-images.githubusercontent.com/86103131/159268069-d7b68db0-6d67-45a5-9288-e8b3c4a335a9.png)
*** 
# Reverse a Linked List 
Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.
### Example
- Input: Head of following linked list 
1->2->3->4->NULL 
- Output: Linked list should be changed to, 
4->3->2->1->NULL
### To reverse a linked list, do the following.
* Initialize three pointers prev as NULL, curr as head and next as NULL
* Iterate through the linked list. In loop, do following,
    
    
    
    next = curr->next
    
    
    
    curr->next = prev 
    
    
    
    prev = curr 
    
    
    
    curr = next
### Time Complexity and Space Complexity
* Time Complexity: O(n) 
* Space Complexity: O(1)

##### Image for Reference:
![image](https://user-images.githubusercontent.com/74498344/158961580-61a95b47-fa77-4547-bfe1-7288fb8aa88b.png)


***
# Detect a Cycle in a Linked List
Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.

### Algorithm
Slow and Faster Pointer - We will use two pointers with different steps forward. The process is as follows:-
We will take two pointers, namely fast and slow. Fast pointer takes 2 steps ahead and slow pointer takes 2 points ahead.
Iterate through the list until the fast pointer is equal to NULL. This is because NULL indicates that there is no cycle present in the given list.
Cycle can be detected when fast and slow pointers collide.
![1](https://user-images.githubusercontent.com/69976168/167245221-c6405419-b152-42c1-ac5b-ef618671cd1b.JPG)
![2](https://user-images.githubusercontent.com/69976168/167245228-e3807860-f6d0-4c06-aaa7-76be25d06d7d.JPG)
![3](https://user-images.githubusercontent.com/69976168/167245234-e22484a2-9ea6-4675-b923-ebeea94aaf2d.JPG)
![4](https://user-images.githubusercontent.com/69976168/167245242-752852fc-2a3a-448d-8264-416a827ab590.JPG)

### Complexities
Time Complexity: O(N)
Reason: In the worst case, all the nodes of the list are visited.
Space Complexity: O(1)
Reason: No extra data structure is used.



# Searching in a linked list

![image](https://user-images.githubusercontent.com/100334178/164755329-e649def2-f5e5-4406-a896-5f78b3a52aa7.png)

### Explanation

1. Linked List : 10  20  30  NULL

Key : 20

![image](https://user-images.githubusercontent.com/100334178/164756127-c0d093cb-c940-419a-9118-3bc0a1c47009.png)

1. temp holding the address of the head node. temp->data = 10. key = 20. temp->data != key, so move the temp variable to the next node.

2. Now, temp->data = 20. key = 20. temp->key == key. "Seach Found".


2. Linked List : 10  20  30  NULL

Key : 100

![image](https://user-images.githubusercontent.com/100334178/164756361-f165f956-4bce-4de8-877f-b6d3bddcd42b.png)

1. temp->data = 10. key = 100. temp->data != key. Hence move the temp variable to the next node.

2. temp->data = 20. key = 100. temp->data != key. Hence move the temp variable to the next node.

3. temp->data = 30. key = 100. temp->data != key. Hence move the temp variable to the next node which is NULL.

4. Finally, the program execution will come out of the loop. So, it will return -1.

"Search Not Found".

 ## Approach1
 **Iterative Solution** 
### Algorithm

1) Initialize a node pointer, current = head.
2) Do following while current is not NULL
    a) current->key is equal to the key being searched return true.
    b) current = current->next
3) Return false 

### Properties
Time-Complexity-->O(n)
Space-Complexity-->O(n)

 ## Approach2
 **Recursive Solution** 
### Algorithm
bool search(head, x)
1) If head is NULL, return false.
2) If head's key is same as x, return true;
3) Else return search(head->next, x) 

### Properties
Time-Complexity-->O(n)
Space-Complexity-->O(n)


# Removing Duplicates

Suppose we have a list of some elements. We have to remove all elements that have occurred more than once. So only the distinct elements will remain in the list. So if the list is like [1,1,1,2,2,3,5,6,6,7,8], then the output will be [3,5,7,8], all other elements are present more than once.

![1](https://user-images.githubusercontent.com/100334178/165158959-12fd67cb-0a78-49de-8b2f-03e1dbad5953.jpg)


## Algorithm

* Create a dummy node with value -1, prev := NULL, dummyPtr := dummy
* while head is not null
* if next of head is present or the value of head is not same as the value of the next node, then
* next of dummyPtr := head
* temp := next of head, and make next of head null
* head := temp
* dummyPtr := next of dummyPtr
* Otherwise
* prev := head, and head := next of head
* while head is not null and value of head = value of prev
* prev := head and head := next of head
* return the next of dummy

#### Input
[1,1,1,2,2,3,5,6,6,7,8]

#### Output
[3, 5, 7, 8, ]

## Properties
### Time Complexity and Space Complexity
* Time Complexity: O(n)
* Auxiliary Space Complexity: O(1)

## Advantages
* In this algorithm problem will be solved  by iterating only  single time through the linked list.
* It takes less time and space complexity.
* Easy to understand algorithm

## Disadvantages
* Linked list must be sorted for applying this algorithm..

