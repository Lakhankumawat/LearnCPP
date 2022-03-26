#  Next Greater Element Using Stack

Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1. 
```
Input: Some expression with brackets "{()}[]"
Output: They are balanced
```

## Algorithim
```
Step 1: Given array and other array to store the index of the next greater element (nge[]) 
Step 2: Push the first element's index (i.e 0) to stack st
       * st.push(0) 
Step 2: Pick rest of the indices of the elements one by one and follow steps in loop. (note in stack we are storing the index of the array not the element of the array)
        1. Mark the current element as next.
        2. If the stack is not empty, compare the next with the array[st.top()]
        3. If next is greater than the array[st.top()], then store the index of next in nge[st.top()] and perform st.pop(). next is the next greater element for the popped indexed element.
        4. Keep popping from the stack while the popped index element is smaller than next. 
Step 3: Finally push the index of the next in the stack.
Step 4: After the loop 2 is over,if the stack is not empty perform nge[st.top()] = -1
Step 5: printing the result
        * print array[i] and array[nge[i]]
        * If nge[i] is equal to -1 print -1
```

**Time Complexity:** O(n)  
**Auxiliary Space:** O(n) for stack.

### Test Case

![image](/images/output.png)


