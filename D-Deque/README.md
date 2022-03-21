# Deque

In the Deque data structure, unlike the Queue, insertion & deletion is possible at both the ends.

Read more about Deque on [GFG](https://www.geeksforgeeks.org/deque-cpp-stl/).

In this directory, we have the implementation of the deque & a corresponding problem, showcasing the use case of it.


## Sliding Window Maximum

**Problem Statement:** You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Show the max sliding window.

![An example illustration](https://algomonster.s3.us-east-2.amazonaws.com/sliding_window_maximum.png)

Attempt the problem [here](https://leetcode.com/problems/sliding-window-maximum/).

**Algorithm**

```
1. Create a deque, Dq.
2. Loop through the array & insert the element at the back of the deque, iff the element at the back is greater than the array element.
3. If the element at the back is less than the current, pop from back until it becomes greater than current element, then do the insertion.
4. Whenever the difference between index & 'k' becomes greater than -2, print the element of array which is at front.
5. Remove the element from front of the deque, if it is out of the current window.
```

**Complexity Analysis**
- **Time Complexity:** Time COmplexity will be O(n) + O(n) ≈ O(n). First O(n) will be because we're doing 'n' iterations. The second O(n) will be because throught out the iteration we'll removing 'n' elements in total.
- **Space Complexity:** O(k). Since, at any moment, the deque is having at most 'k' elements.

For more info on Sliding Window Maximum problem, visit [GFG](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/). 