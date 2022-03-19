# Table of Content
- [Cycle in Linked List][here](# Cycle in Linked List)
- Terms Explained
- Algorithm used
- Approach
- Algorithm
- Properties
- Advantages
- Disadvantages


## Cycle in Linked List
Given a linked list, check if the linked list has cycle or not. Below diagram shows a linked list with a cycle. 
![image](https://www.geeksforgeeks.org/wp-content/uploads/2009/04/Linked-List-Loop.gif)


## Terms Explained:
Linked List : A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. 
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)


## Algorithm used: [Floyd's Algorithm or Hare-Tortoise Algorithm]
Floyd's Algorithm is the fastest method to detect cycle in linked list using two pointers.
- How does above algorithm work? 
Please See : How does Floyd’s slow and fast pointers approach work?
[here](https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/)


## Approach
- This is the fastest method to detect cycle in linked list
- Traverse linked list by using two pointers.
- Move one pointer(slow) by one step and second pointer(fast) by   two step.
- If these pointers meet at the same node then there is a cycle. If pointers do not meet then linked list doesn’t have a cycle present.


## Algorithm
bool detectCycle(node* &head){
    node *slow = head;     
    node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;       
        fast = fast->next->next; 

        if(fast == slow){    
            return true;
        }
    }
    return false;    
}


## Properties
# Complexity Analysis:  
## Time Complexity: O(n)
- Only one traversal of the loop is needed.

## Space Complexity: O(1)
- There is no space required.


## Advantages
- This is the fastest method to detect cycle in linked list
- There is no space required.


## Disadvantages
- Use of Two pointers

You can also see different approches [here](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)