<!-- Table of content -->
# Table of content
- [Problem Statement: Next Greater Element.](#nge)
   - [Algorithm.](#algo)
   - [Visualization of Algorithm.](#approach)
   - [Time Complexity](#time)
   - [Auxiliary Space](#space)
   
<a name ="nge"></a>
#  Next Greater Element Using Stack

Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1. 
```
Input: elements of array 11 13 21 3
Output: 
11-->13
13-->21
21-->-1
3-->-1
```
<a name ="algo"></a>
## Algorithm
```
* Push the first element to stack.
* Pick rest of the elements one by one and follow the following steps in loop. 
   1. Mark the current element as next.
   2. If stack is not empty, compare top element of stack with next.
   3. If next is greater than the top element, Pop element from stack. next is the next greater element for the popped element.
   4. Keep popping from the stack while the popped element is smaller than next. next becomes the next greater element for all such popped elements.
* Finally, push the next in the stack.
* After the loop in step 2 is over, pop all the elements from the stack and print -1 as the next element for them
```
<a name ="approach"></a>
## Visualization of Algorithm below:
![NextGreaterElement](https://user-images.githubusercontent.com/84399701/163118470-25118e13-5087-4b2a-94c3-d3f7e5b760e3.png)

<a name ="time"></a>
**Time Complexity:** O(n)





<a name ="space"></a>
**Auxiliary Space:** O(n) for stack.






