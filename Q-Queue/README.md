## 1. Reverse a Queue

Reverse a given queue with and without using recursion

### [Reverse a queue without using recursion](https://www.geeksforgeeks.org/reversing-a-queue/)

### Approach

1. Using the Last In First Out (LIFO) property of stack to get the last element of queue as the topmost element of stack.
2. Add the stack elements again to the queue till stack is empty, which would give the queue in reverse order.

<!-- image to help better explain the concept -->

![QueueWithoutRecursion](https://user-images.githubusercontent.com/58851969/156617495-66c5bcc1-8c21-4e9e-ab51-a28896166338.png)

<!-- citation : [Here](https://www.codespeedy.com/reverse-a-queue-in-python/)  -->

### Pseudo Code

```
begin reverseQueueWithoutRecursion(queue)
    stack s
    while(queue is not empty)
        s.push(queue.front());
        q.pop()
    end of while
    while( stack is not empty)
        q.push(s.top())
        s.pop()
    end of while
end reverseQueueWithoutRecursion
```

### Properties

- Time Complexity : O(n)

- Space Complexity : O(n)

### [Reverse a queue using recursion](https://www.geeksforgeeks.org/reversing-queue-using-recursion/)

### Approach :

1. Store the front element of the queue in a variable and pop that element from queue.
2. Continue Step 1 until queue is empty.
3. Push the popped element in the resultant queue.

   <!-- image to help better explain the concept -->

   ![Queue-reversal-using-recursion](https://user-images.githubusercontent.com/58851969/156620794-d21157e6-54a3-46ed-b9c6-e5c354bee35e.jpg)
   <!-- citation : [Here](https://www.geeksforgeeks.org/reversing-queue-using-recursion/)  -->

### Pseudo Code

```
begin reverseQueueWithRecursion(queue)
    if(queue is empty)
       return
    end of if
    data = queue.front()
    queue.pop()
    reverseQueueWithRecursion(queue)
    queue.push(data)
end reverseQueueWithRecursion
```

### Properties

- Time Complexity : O(n)
- Space Complexity : O(n) (As recursion uses stack concept)


## 2. Implementation of Queue using Array

### Problem Statement
Implementation of Queue using Array and performing different operations such as insertion, deletion and display of elements in a queue.

### Features

1. Queue is a linear data structure which has two ends, one for insertion of elements and other for deletion of elements.
2. The first end is called ‘Rear’ and the later is called ‘Front’.
3. Elements are inserted from Rear end and deleted from Front end.
4. Queues are called First In First Out (FIFO) list, since the first element in a queue will be the first element out of the queue.

### Approach

- There are 3 main operations.
1. Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition. 
2. Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition. 
3. Display: All the elements of the queue are displayed, starting from the front index to the rear.

<!-- image to help better explain the concept -->

![Queue](https://www.tutorialandexample.com/wp-content/uploads/2020/05/Queue-in-DS-1.jpg)

### Pseudo Code
1. For insertion
```
STEP 1: IF REAR == N-1
   Return OVERFLOW
   Goto STEP 3

STEP 2: IF REAR != N-1
   Set ARR[REAR] = INTEGER
   INCREMENT REAR BY 1
   {END OF LOOP}

STEP 3: EXIT LOOP
```
2. For deletion
```
STEP 1: IF (FRONT==0 AND REAR==-1) OR FRONT==REAR+1
        Return UNDERFLOW
        Goto STEP 2
        ELSE
        Return ARR[FRONT]
        INCREMENT FRONT BY 1

STEP 2: EXIT  
```
3. For display
```
for i from front to rear
    print array[i]

```
### Properties

1. Time Complexity : 
- Enqueue: O(1) time
- Dequeue: O(1) time
-  Display: O(N) time

2. Space Complexity : O(1)

### Disadvantages of implementing queue using array

- Memory wastage : The space of the array, which is used to store queue elements, can never be reused to store the elements of that queue because the elements can only be inserted at front end and the value of front might be so high so that, all the space before that, can never be filled.


## 3. Implementation of Queue using Linked List

### Problem Statement
Implementation of Queue using Linked List and performing different operations such as insertion, deletion and display of elements in a queue.

### Features

1. Queue is a linear data structure which has two ends, one for insertion of elements and other for deletion of elements.
2. In linked list implementation of a queue, the last inserted node is always pointed by 'rear' and the first node is always pointed by 'front'.
3. The queue which is implemented using a linked list can work for an unlimited number of values.
4. Queue using linked list can work for the variable size of data (No need to fix the size at the beginning of the implementation).

### Approach

- There are 3 main operations.
1. Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition. 
2. Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition. 
3. Display: All the elements of the queue are displayed, starting from the front index to the rear.

<!-- image to help better explain the concept -->

![QueueusingLinkedList](https://prepinsta.com/wp-content/uploads/2020/07/Implementation-of-Queues-using-Linked-List-in-C.webp)

### Pseudo Code
1. For insertion
```
Step 1: Allocate the space for the new node NEWNODE
Step 2: SET NEWNODE -> DATA = VAL
Step 3: IF FRONT = NULL
SET FRONT = REAR = PTR
SET FRONT -> NEXT = REAR -> NEXT = NULL
ELSE
SET REAR -> NEXT = NEWNODE
SET REAR = NEWNODE
SET REAR -> NEXT = NULL
[END OF IF]
Step 4: END
```
2. For deletion
```
Step 1: Take TEMP=FRONT
Step 2: IF FRONT = NULL
Write " Underflow "
Go to Step 5
[END OF IF]
Step 3: SET TEMP = FRONT
Step 4: SET FRONT = FRONT -> NEXT
Step 5: FREE TEMP
Step 6: END  
```
3. For display
```
Step 1: Set TEMP = FRONT [Initializes pointer TEMP]
Step 2: Repeat Steps 3 and 4 while TEMP != NULL
Step 3: Apply PROCESS to TEMP -> DATA
Step 4: Set TEMP = TEMP -> NEXT
[End of Step 2 loop]
5. Exit
```
### Properties

1. Time Complexity : 
- Enqueue: O(1) time
- Dequeue: O(1) time
-  Display: O(N) time

2. Space Complexity : O(1)

### Advantages of implementing queue using linked list

- The benefit of implementing queue using linked list over arrays is that it allows to grow the queue as per the requirements,i.e, memory can be allocated dynamically.

## 2. Implementation of Circular Queue using Array

### Problem Statement
Implementation of Circular Queue using Array and performing different operations such as insertion, deletion and display of elements in a queue.

### Features

1. Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle.
2.  It is also called ‘Ring Buffer’. 
3.  In a normal Queue, we can insert elements until queue becomes full. But once queue becomes full, we can not insert the next element even if there is a space in front of queue.
4.  This problem is solved using Circular Queue.

### Approach

- There are 3 main operations.
1. Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition. 
2. Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition. 
3. Display: All the elements of the queue are displayed, starting from the front index to the rear.

<!-- image to help better explain the concept -->

![CircularQueue_Array](https://media.geeksforgeeks.org/wp-content/uploads/Circular-queue_1.png)

### Pseudo Code
1. For insertion
```
Step 1: Check if the queue is full (Rear + 1 % Maxsize = Front)
Step 2: If the queue is full, there will be an Overflow error
Step 3: Check if the queue is empty, and set both Front and Rear to 0
Step 4: If Rear = Maxsize - 1 & Front != 0 (rear pointer is at the end of the queue and front is not at 0th index), then set Rear = 0
Step 5: Otherwise, set Rear = (Rear + 1) % Maxsize
Step 6: Insert the element into the queue (Queue[Rear] = x)
Step 7: Exit
```
2. For deletion
```
Step 1: Check if the queue is empty (Front = -1 & Rear = -1)
Step 2: If the queue is empty, Underflow error
Step 3: Set Element = Queue[Front]
Step 4: If there is only one element in a queue, set both Front and Rear to -1 (IF Front = Rear, set Front = Rear = -1)
Step 5: And if Front = Maxsize -1 set Front = 0
Step 6: Otherwise, set Front = Front + 1
Step 7: Exit
  
```
3. For display
```
Step 1 - Check whether queue is EMPTY. (front == -1)
Step 2 - If it is EMPTY, then display "Queue is EMPTY!!!" and terminate the function.
Step 3 - If it is NOT EMPTY, then define an integer variable 'i' and set 'i = front'.
Step 4 - Check whether 'front <= rear', if it is TRUE, then display 'queue[i]' value and increment 'i' value by one (i++). Repeat the same until 'i <= rear' becomes FALSE.
Step 5 - If 'front <= rear' is FALSE, then display 'queue[i]' value and increment 'i' value by one (i++). Repeat the same until'i <= SIZE - 1' becomes FALSE.
Step 6 - Set i to 0.
Step 7 - Again display 'cQueue[i]' value and increment i value by one (i++). Repeat the same until 'i <= rear' becomes FALSE.
```
### Properties

1. Time Complexity : 
- Enqueue: O(1) time
- Dequeue: O(1) time

2. Space Complexity : O(1)

### Applications of Circular Array

- CPU scheduling
- Memory management
- Traffic Management
