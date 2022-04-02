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


## 2. Reverse K elements in Queue
Only following standard operations are allowed on queue. 
- enqueue(x) : Add an item x to rear of queue
- dequeue() :  Remove an item from front of queue
- size() :     Returns number of elements in queue.
- front() :    Finds front item.

### [Reverse k elements of queue](https://www.geeksforgeeks.org/reversing-first-k-elements-queue/)

### Approach

1. Remove first k elements of the queue and push them into a stack.
2. Pop all the elements of the stack and push them to the end of the queue.
3. Pop-out (n – k) elements from the front of the queue and push them to the end of the queue, where n is the total number of elements in the queue.
4. First, k elements of the queue are reversed, print the elements of the queue.

<!-- image to help better explain the concept -->

   ![Queue-reversal-using-recursion](https://www.tutorialcup.com/wp-content/uploads/2020/06/ReversingtheFirstKelementsofaQueue1.png?ezimgfmt=ng:webp/ngcb41)
  

### Complexity Analysis for Reversing the First K elements of a Queue
- Time Complexity = O(n + k)
- Space Complexity = O(k) 
where n is the number of elements in the queue.