#DYNAMIC PROGRAMMING : 
	Dynamic Programming is a method for solving a complex problem by breaking it down into a collection of simpler sub-problems, solving each of those subproblems just once, and storing their solutions using a memory-based data structures.

##KADANE'S ALGORITHM : 
	Kadane’s algorithm is a Dynamic Programming approach to maintain the maximum possible sum of a subarray ending at an index without needing to store the numbers in an auxiliary array thereby reducing the space complexity.
Let us understand this kadane's algorithm using a popular problem of Largest Sum of Contiguous Subarray. 

**LARGEST SUM OF CONTIGUOUS SUBARRAY** 
            
**Problem Statement** = 
Given an array A[] with n elements.find the maximum sum of a subarray 
among all subarrays of that array. A subarray of array A[] of length n is a contiguous segment from A[i] through A[j] where 0<= i <= j <= n. Some properties of this problem are:
    	* If the array contains all positive numbers, the maximum subarray is the entire array.
    	* Several different sub-arrays may have the same maximum sum.
    
**Example :**

    1. A = {2,1,-2,5,6,-7,3}
       * Subarray = {5,6} 
       * o/p Largest Sum = 11
       
    2. B = {7,2,3,1,10}
       * Subarray = {7,2,3,1,10}... if all nos are positive then their sum is largest sum.
       * o/p largest Sum = 23
       
    3. C = {-2}...only one negative number
        * Subarray = {-2}
        * o/p Largest Sum = -2
        
    4. D = {-9,-4,-3,-7,-2,-10} ...if all elements are negative then largest sum should be largest element in array
        * Subarray = {-2}
        * o/p Largest Sum = -2

        
**Optimal Approach : Kadane's Algorithm** 

    Find all possible subarrays and their sum.Largest among them is required largest sum.
    1. Initialise max_sum=A[0]
    2. Initialize curr_sum = 0
    3. for loop to iterate over an array, i=0 to i=n-1
    4. Add A[i] to curr_sum for every pass.
    5. If at any point curr_sum < 0 or curr_sum < max_sum then reassign curr_sum to 0.
    6. If curr_sum > max_sum, then max_sum = curr_sum
    7. return max_sum

**Time Complexity :** O(n)\
**Space Complexity :**O(1)

**Tip :** 
	* Don't use sorting technique as in order to find subarray,order of an array becomes important.\
	* Time Complexity will reduce in Divide & Conquer Method to O(nlogn) but space complexity will increase to O(nlogn).