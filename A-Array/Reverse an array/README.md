### Reverse an array 


**Approaches : **  

1. Iterative Approach
2. Recursive Approach 

**ITERATIVE APPRAOCH**
**Steps :**

1. Declare and initialize variables start=0 and end=length-1
2. While start<end, swap start and end.
3. Change start=start+1 and end=end-1 for the rest of the loop.

**Time Complexity** 
  
Time Complexity : O(n) 

**RECURSIVE APPRAOCH**
**Steps :**

1. Declare and initialize variables start=0 and end=length-1
2. When start<end,swap A[start] and A[end].
3. Make a recursive call with start=start+1 and end=end-1 parameters.

**Time Complexity** 
  
Time Complexity : O(n) 



### OUTPUT : 

1. Iterative Approach : 

![image](https://user-images.githubusercontent.com/81226536/163531704-3f471843-98d6-4b9a-8048-2bb9797d4535.png)

2. Recursive Approach : 

![image](https://user-images.githubusercontent.com/81226536/163531964-06c39e02-211a-4c45-9644-07a3cf838f29.png)

