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

## 2. Deque Data Structure

Double-ended queues are sequence containers with the feature of insertion & deletion on both ends, whereas a Queue data structure allows insertion from one end & deletion from other end.

The deque data structure is present in the 'deque' header file.

**Syntax**

```
deque <data_type> name
```

![DequeImplementation](https://media.geeksforgeeks.org/wp-content/uploads/anod.png)

### Functions available with Deque

**max_size():** Returns the maximum number of elements deque can contain.

**push_back() and push_front():** push_front( ) push the elements into a deque from the front and push_back() push elements into a deque from the back.

**pop_front() and pop_back():** pop_front() function is used to pop elements from a deque from the front and pop_back() function is used to pop elements from a deque from the back.

**clear() and erase():** clear is used to remove all the elements from the deque and erase is used to remove some specified elements.

**insert():** increases the container side by inserting element in the specified position.

**resize():** changes the size of the element’s container as per requirement.

**rbegin() and rend():** rbegin() points to the last element of the deque whereas rend points to the position before the beginning of the deque.

**at() and swap():** at() points to the position of the element given in the parameter and swap( ) is used two swap elements of two deques.

**emplace_front() and emplace_back():** these two functions are used to insert new elements in the container at the beginning and at the end of deque respectively.

### Algorithm for Insertion at rear end

```
Step-1: [Check for overflow]
		if(rear==MAX)
			Print("Queue is Overflow”);
			return;
Step-2:  [Insert Element]
		else
			rear=rear+1;
			q[rear]=no;
		[Set rear and front pointer]
		if rear=0
			rear=1;
		if front=0
			front=1;
Step-3: return
```

![insertionAtBack](https://iq.opengenus.org/content/images/2018/05/push_back.png)

### Algorithm for Insertion at front end

```
Step-1 :  [Check for the front position]
		if(front<=1)
			Print("Cannot add item at the front”);
			return;
Step-2 :  [Insert at front]
		else
			front=front-1;
			q[front]=no;
Step-3  : Return
```

![insertionAtFront](https://iq.opengenus.org/content/images/2018/05/push_front-1.png)

### Algorithm for Deletion from front end

```
Step-1 [ Check for front pointer]
		if front=0
			print(" Queue is Underflow”);
			return;
Step-2 [Perform deletion]
		else
			no=q[front];
			print(“Deleted element is”,no);
		[Set front and rear pointer]
		if front=rear
			front=0;
			rear=0;
		else
			front=front+1;
Step-3 : Return
```

![deletionFromFront](https://iq.opengenus.org/content/images/2018/05/pop_front-1.png)

### Algorithm for Deletion from rear end

```
Step-1 : [Check for the rear pointer]
		if rear=0
			print(“Cannot delete value at rear end”);
			return;
Step-2:  [ perform deletion]
		else
			no=q[rear];
			[Check for the front and rear pointer]
		if front= rear
			front=0;
			rear=0;
		else
			rear=rear-1;
			print(“Deleted element is”,no);
Step-3 : Return
```

### Time Complexity analysis

- Insertion or deletion in the middle is O(n)

- Complexity of random access by index is O(1)

- Complexity of all enque(insert)/deque(delete) operations is O(1)

Learn more about Deque on [GFG](https://www.geeksforgeeks.org/deque-cpp-stl/).
