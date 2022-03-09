# STACK :
1. A linear-data structure that follows LIFO (Last In First Out) principle.
2. It can be implemented using Array or Linked List.


## Static implementation of Stack :
1. A stack data structure can be implemented using a one-dimensional array. But stack implemented using array stores only a fixed number of data values. 
2. Just define a one dimensional array of specific size and insert or delete the values into that array by using LIFO principle with the help of a variable called 'top'. Initially, the top is set to -1. Whenever we want to insert a value into the stack, increment the top value by one and then insert. Whenever we want to delete a value from the stack, then delete the top value and decrement the top value by one.
3. Push - This adds a data value to the top of the stack.
4. Pop - This removes the data value on top of the stack.


### Algorithm:
1. PUSH
Step 1: Start

Step 2: Declare  stk[MAX];    //Maximum size of Stack 

Step 3: Check if the stack is full or not by comparing top with (MAX-1)
		If the stack is full, Then print "Stack is full." and cannot be pushed with another element 

Step 4: Else, the stack is not full
		Increment top by 1 and Set, stk[top] = num
		which pushes the element num into the address pointed by top.
		// The element num is stored in stk[top]

Step 5: Stop

2. POP
Step 1: Start

Step 2: Declare  stk[MAX]

Step 3: Push the elements into the stack 

Step 4: Check if the stack is empty or not by comparing top with base of array i.e 0
		If top is less than 0, then stack is empty, print "Stack is empty"
                                
Step 5: Else, If top is greater than zero the stack is not empty, then store the value pointed by top in a variable num = stk[top] and decrement top by 1. The popped element is num.

        
#### Properties:
Time Complexity: O(N)\
Space Complexity: O(N)

##### Advantage:
The advantage of using an array implementation for a stack is that it is more efficient in terms of time than a linked list implementation. This is because there is none of the work associated with claiming new store as the size of the stack increases and garbage collecting it as it reduces.

###### Disadvantage:
In array it take lots of effort to add new element or remove an element . In stack we can easily add or remove elements from stack . Because of dynamic memory allocation if we not use all memory space then there will be wastage of memory space .

https://media.geeksforgeeks.org/wp-content/uploads/20210716162942/stack-660x345.png