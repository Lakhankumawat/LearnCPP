### Singly Linked List 

1. Create a SLL 
2. Display a SLL 
3. Insert a node in SLL 
4. Delete a node in SLL 

### Creating Singly Linked List 

**Steps :**  

1. Create an array and store elements in array.
2. Create nodes using malloc function and store elements of array in Linked List. 

**Space Complexity** 

Extra space is used to store elements of LL in array.  
Space Complexity : O(n) 

### Displaying the Singly Linked List 

**Steps :**

1. Use the pointer and display node data until node becomes null.

**Time Complexity** 

1. Displaying the first node => O(1) 
2. Displaying a node in between => O(n) 
3. Displaying the last node => O(n) 

**Space Complexity** 

No extra space is used.   
Space Complexity : O(1)  

### Inserting a node in Singly Linked List 

**Steps :** 

1. Inserting a node at first position will shift first or head pointer to new node.
2. For inserting a node in between, bring temporary pointer p to the position. 

Inserting at first position : 

![Linkedlist_insert_at_start](https://user-images.githubusercontent.com/81226536/157304956-2cee37f1-5cda-455a-ad4a-477b74cdad01.png) 

Inserting a node in between : 

![Linkedlist_insert_middle](https://user-images.githubusercontent.com/81226536/157304917-d53314ee-add4-412b-9a45-71e24e53f8d2.png) 
 
**Time Complexity** 

1. Inserting the first node => O(1) 
2. Inserting a node in between => O(n) 
3. Inserting the last node => O(n) 

**Space Complexity** 

No extra space is used.  
Space Complexity : O(1) 

### Deleting a node in Singly Linked List 

**Steps :**

1. Find the previous node of the node to be deleted. 
2. Change the next of the previous node. 
3. Free memory for the node to be deleted.


Deleting a node  : 

![Linkedlist_deletion](https://user-images.githubusercontent.com/81226536/157306410-645f3871-7d8d-4f01-8492-66862d6da268.png) 

**Time Complexity** 

1. Deleting the first node => O(1) 
2. Deleting a node in between => O(n) 
3. Deleting the last node => O(n) 

**Space Complexity** 

No extra space is used.   
Space Complexity : O(1) 

### OUTPUT : 

1. Insertion 

![insertion in LL](https://user-images.githubusercontent.com/81226536/157299920-c3f7b0c3-9251-4480-af1b-f48d716a2547.png)

2. Deletion 

![deletion in LL](https://user-images.githubusercontent.com/81226536/157299882-c34dad3e-f087-4bf7-b480-ccc45cc32b00.png)