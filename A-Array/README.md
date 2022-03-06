<h2>Median if Two Sorted Arrays</h2>

<h4> OF DIFFERENT SIZES </h4>
Given two sorted arrays, a[] and b[], the task is to find the median of these sorted arrays, in O(log n + log m) time complexity, when n is the number of elements in the first array, and m is the number of elements in the second array. 
This is an extension of median of two sorted arrays of equal size problem. Here we handle arrays of unequal size also.

Example: 

Input: ar1[] = {-5, 3, 6, 12, 15}
        ar2[] = {-12, -10, -6, -3, 4, 10}
Output : The median is 3.
Explanation : The merged array is :
        ar3[] = {-12, -10, -6, -5 , -3,
                 3, 4, 6, 10, 12, 15},
       So the median of the merged array is 3

Input: ar1[] = {2, 3, 5, 8}
        ar2[] = {10, 12, 14, 16, 18, 20}
Output : The median is 11.
Explanation : The merged array is :
        ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
        if the number of the elements are even, 
        so there are two middle elements,
        take the average between the two :
        (10 + 12) / 2 = 11.
Method 1: This method uses a linear and simpler approach. 

Approach: The given arrays are sorted, so merge the sorted arrays in an efficient way and keep the count of elements inserted in the output array or printed form. So when the elements in the output array are half the original size of the given array print the element as a median element. There are two cases: 

Case 1: m+n is odd, the median is at (m+n)/2 th index in the array obtained after merging both the arrays.
Case 2: m+n is even, the median will be average of elements at index ((m+n)/2 – 1) and (m+n)/2 in the array obtained after merging both the arrays
Algorithm: 

Given two arrays are sorted. So they can be merged in O(m+n) time. Create a variable count to have a count of elements in the output array.
If the value of (m+n) is odd then there is only one median else the median is the average of elements at index (m+n)/2 and ((m+n)/2 – 1).
To merge the both arrays, keep two indices i and j initially assigned to 0. Compare the ith index of 1st array and jth index of second, increase the index of the smallest element and increase the count.
Store (m+n)/2 and (m+n)/2-1 in two variables (In the below C++ code, m1 and m2 are used for this purpose).
Check if the count reached (m+n) / 2. If (m+n) is odd return m1, If even return (m1+m2)/2.
Implementation: 


// A Simple Merge based O(n) solution to find
// median of two sorted arrays
#include <stdio.h>
 
/* This function returns median of ar1[] and ar2[].
Assumption in this function:
Both ar1[] and ar2[] are sorted arrays */
int getMedian(int ar1[], int ar2[], int n, int m)
{
    int i = 0; /* Current index of input array ar1[] */
    int j = 0; /* Current index of input array ar2[] */
    int count;
    int m1 = -1, m2 = -1;
 
    // Since there are (n+m) elements,
    // There are following two cases
    // if n+m is odd then the middle
    //index is median i.e. (m+n)/2
    if((m + n) % 2 == 1) {
        for (count = 0; count <= (n + m)/2; count++) {
            if(i != n && j != m){
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if(i < n){
            m1 = ar1[i++];
            }
            // for case when j<m,
            else{
            m1 = ar2[j++];
            }
        }
        return m1;
    }
     
    // median will be average of elements
    // at index ((m+n)/2 - 1) and (m+n)/2
    // in the array obtained after merging ar1 and ar2
    else {
        for (count = 0; count <= (n + m)/2; count++) {
            m2 = m1;
            if(i != n && j != m){
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if(i < n){
            m1 = ar1[i++];
            }
            // for case when j<m,
            else{
            m1 = ar1[j++];
            }
        }
        return (m1 + m2)/2;
    }
}
 
/* Driver program to test above function */
int main()
{
    int ar1[] = {900};
    int ar2[] = {5, 8, 10, 20};
 
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    printf("%d", getMedian(ar1, ar2, n1, n2));
    getchar();
    return 0;
}
// This code is uploaded by Pratil
 
 

Output
10
 

Complexity Analysis: 

 

Time Complexity: O(m + n). 
To merge both the arrays O(m+n) time is needed.
Space Complexity: O(1). 
No extra space is required.
 

Efficient solution: 

 

Approach:The idea is simple, calculate the median of both the arrays and discard one half of each array. 
Now, there are some basic corner cases. For array size less than or equal to 2 

 

Suppose there are two arrays and the size of both the arrays is greater than 2. 
Find the middle element of the first array and middle element of the second array (the first array is smaller than the second) if the middle element of the smaller array is less than the second array, then it can be said that all elements of the first half of smaller array will be in the first half of the output (merged array). So, reduce the search space by ignoring the first half of the smaller array and the second half of the larger array. Else ignore the second half of the smaller array and first half of a larger array.

 

In addition to that there are more basic corner cases: 

 

If the size of smaller array is 0. Return the median of a larger array.
if the size of smaller array is 1. 
The size of the larger array is also 1. Return the median of two elements.
If the size of the larger array is odd. Then after adding the element from 2nd array, it will be even so the median will be an average of two mid elements. So the element from the smaller array will affect the median if and only if it lies between (m/2 – 1)th and (m/2 + 1)th element of the larger array. So, find the median in between the four elements, the element of the smaller array and (m/2)th, (m/2 – 1)th and (m/2 + 1)th element of a larger array
Similarly, if the size is even, then check for the median of three elements, the element of the smaller array and (m/2)th, (m/2 – 1)th element of a larger array
If the size of smaller array is 2 
If the larger array also has two elements, find the median of four elements.
If the larger array has an odd number of elements, then the median will be one of the following 3 elements 
Middle element of larger array
Max of the second element of smaller array and element just before the middle, i.e M/2-1th element in a bigger array
Min of the first element of smaller array and element 
just after the middle in the bigger array, i.e M/2 + 1th element in the bigger array
If the larger array has even number of elements, then the median will be one of the following 4 elements 
The middle two elements of the larger array
Max of the first element of smaller array and element just before the first middle element in the bigger array, i.e M/2 – 2nd element
Min of the second element of smaller array and element just after the second middle in the bigger array, M/2 + 1th element
 

How can one half of each array be discarded?

 

Let’s take an example to understand this
Input :arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
brr[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 }
Dry Run of the code:
Recursive call 1:
smaller array[] = 1 2 3 4 5 6 7 8 9 10, mid = 5
larger array[] = 11 12 13 14 15 16 17 18 19 , mid = 15

5 < 15
Discard first half of the first array and second half of the second array

Recursive call 2:
smaller array[] = 11 12 13 14 15, mid = 13
larger array[] = 5 6 7 8 9 10, mid = 7

7 < 13
Discard first half of the second array and second half of the first array

Recursive call 3:
smaller array[] = 11 12 13 , mid = 12
larger array[] = 7 8 9 10 , mid = 8

8 < 12
Discard first half of the second array and second half of the first array

Recursive call 4:
smaller array[] = 11 12
larger array[] = 8 9 10

Size of the smaller array is 2 and the size of the larger array is odd
so, the median will be the median of max( 11, 8), 9, min( 10, 12)
that is 9, 10, 11, so the median is 10.

Output:10.000000

 

Algorithm: 

 

Create a recursive function that takes two arrays and the sizes of both the arrays.
Take care of the base cases for the size of arrays less than 2. (previously discussed in Approach).Note: The first array is always the smaller array.
Find the middle elements of both the arrays. i.e element at (n – 1)/2 and (m – 1)/2 of first and second array respectively. Compare both the elements.
If the middle element of the smaller array is less than the middle element of the larger array then the first half of the smaller array is bound to lie strictly in the first half of the merged array. It can also be stated that there is an element in the first half of the larger array and the second half of the smaller array which is the median. So, reduce the search space to the first half of the larger array and the second half of the smaller array.
Similarly, If the middle element of the smaller array is greater than the middle element of the larger array then reduce the search space to the first half of the smaller array and second half of the larger array.
 

Implementation: 

 


// A C++ program to find median of two sorted arrays of
// unequal sizes
#include <bits/stdc++.h>
using namespace std;
 
// A utility function to find median of two integers
float MO2(int a, int b)
{ return ( a + b ) / 2.0; }
 
// A utility function to find median of three integers
float MO3(int a, int b, int c)
{
    return a + b + c - max(a, max(b, c))
                     - min(a, min(b, c));
}
 
// A utility function to find a median of four integers
float MO4(int a, int b, int c, int d)
{
    int Max = max( a, max( b, max( c, d ) ) );
    int Min = min( a, min( b, min( c, d ) ) );
    return ( a + b + c + d - Max - Min ) / 2.0;
}
 
// Utility function to find median of single array
float medianSingle(int arr[], int n)
{
   if (n == 0)
      return -1;
   if (n%2 == 0)
        return (double)(arr[n/2] + arr[n/2-1])/2;
   return arr[n/2];
}
 
// This function assumes that N is smaller than or equal to M
// This function returns -1 if both arrays are empty
float findMedianUtil( int A[], int N, int B[], int M )
{
    // If smaller array is empty, return median from second array
    if (N == 0)
      return medianSingle(B, M);
 
    // If the smaller array has only one element
    if (N == 1)
    {
        // Case 1: If the larger array also has one element,
        // simply call MO2()
        if (M == 1)
            return MO2(A[0], B[0]);
 
        // Case 2: If the larger array has odd number of elements,
        // then consider the middle 3 elements of larger array and
        // the only element of smaller array. Take few examples
        // like following
        // A = {9}, B[] = {5, 8, 10, 20, 30} and
        // A[] = {1}, B[] = {5, 8, 10, 20, 30}
        if (M & 1)
            return MO2( B[M/2], MO3(A[0], B[M/2 - 1], B[M/2 + 1]) );
 
        // Case 3: If the larger array has even number of element,
        // then median will be one of the following 3 elements
        // ... The middle two elements of larger array
        // ... The only element of smaller array
        return MO3( B[M/2], B[M/2 - 1], A[0] );
    }
 
    // If the smaller array has two elements
    else if (N == 2)
    {
        // Case 4: If the larger array also has two elements,
        // simply call MO4()
        if (M == 2)
            return MO4(A[0], A[1], B[0], B[1]);
 
        // Case 5: If the larger array has odd number of elements,
        // then median will be one of the following 3 elements
        // 1. Middle element of larger array
        // 2. Max of first element of smaller array and element
        //    just before the middle in bigger array
        // 3. Min of second element of smaller array and element
        //    just after the middle in bigger array
        if (M & 1)
            return MO3 ( B[M/2],
                         max(A[0], B[M/2 - 1]),
                         min(A[1], B[M/2 + 1])
                       );
 
        // Case 6: If the larger array has even number of elements,
        // then median will be one of the following 4 elements
        // 1) & 2) The middle two elements of larger array
        // 3) Max of first element of smaller array and element
        //    just before the first middle element in bigger array
        // 4. Min of second element of smaller array and element
        //    just after the second middle in bigger array
        return MO4 ( B[M/2],
                     B[M/2 - 1],
                     max( A[0], B[M/2 - 2] ),
                     min( A[1], B[M/2 + 1] )
                   );
    }
 
    int idxA = ( N - 1 ) / 2;
    int idxB = ( M - 1 ) / 2;
 
     /* if A[idxA] <= B[idxB], then median must exist in
        A[idxA....] and B[....idxB] */
    if (A[idxA] <= B[idxB] )
      return findMedianUtil(A + idxA, N/2 + 1, B, M - idxA );
 
    /* if A[idxA] > B[idxB], then median must exist in
       A[...idxA] and B[idxB....] */
    return findMedianUtil(A, N/2 + 1, B + idxA, M - idxA );
}
 
// A wrapper function around findMedianUtil(). This function
// makes sure that smaller array is passed as first argument
// to findMedianUtil
float findMedian( int A[], int N, int B[], int M )
{
    if (N > M)
       return findMedianUtil( B, M, A, N );
 
    return findMedianUtil( A, N, B, M );
}
 
// Driver program to test above functions
int main()
{
    int A[] = {900};
    int B[] = {5, 8, 10, 20};
 
    int N = sizeof(A) / sizeof(A[0]);
    int M = sizeof(B) / sizeof(B[0]);
 
    printf("%f", findMedian( A, N, B, M ) );
    return 0;
}
Output
10.000000
Complexity Analysis: 

Time Complexity: O(min(log m, log n)). 
In each step one half of each array is discarded. So the algorithm takes O(min(log m, log n)) time to reach the median value.
Space Complexity: O(1). 
No extra space is required.
Solution 3 : Simple Mathematical Approach 

Approach: The given two arrays are sorted, so we need to merge them into a third array using the method System.arraycopy(src, srcPos, dest, destPos, length) and then sort the third array using Arrays.sort(array) method.

1. Case 1: If the length of the third array is odd, then the median is at (length)/2 th index in the array obtained after merging both the arrays.

2. Case 2: If the length of the third array is even, then the median will be the average of elements at index ((length)/2 ) and ((length)/2 – 1) in the array obtained after merging both the arrays.

Algorithm:
1. Merge the two given arrays into one array.
2. Then sort the third(merged) array
3. If the length of the third array is even then :
    divide the length of array by 2
    return arr[value]  + arr[value - 1] / 2
    
4. If the length of the third array is odd then :
    divide the length of array by 2
    round that value 
    return the arr[value] 
Implementation: 

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
int Solution(int arr[], int n)
{
  
    // If length of array is even
     if (n % 2 == 0)
     {
       int z = n / 2;
       int e = arr[z];
       int q = arr[z - 1];
       int ans = (e + q) / 2;
       return ans;
     }
    
     // If length if array is odd
    else
     {
       int z = round(n / 2);
       return arr[z];
     }
}
 
 // Driver Code
int main() {
    
        // TODO Auto-generated method stub
        int arr1[] = { -5, 3, 6, 12, 15 };
        int arr2[] = { -12, -10, -6, -3, 4, 10 };
 
        int i =  sizeof(arr1) / sizeof(arr1[0]);
        int j =  sizeof(arr2) / sizeof(arr2[0]);
 
        int arr3[i+j];
        int l =  i+j;
        // Merge two array into one array
        for(int k=0;k<i;k++)
        {
            arr3[k]=arr1[k];
        }
          
        int a=0; 
        for(int k=i;k<l;k++)
        {
            arr3[k]=arr2[a++];
        }
 
        // Sort the merged array
        sort(arr3,arr3+l);
 
        // calling the method
        cout<<"Median = " << Solution(arr3, l);
}
 
// This code is contributed by SoumikMondal
 
 

Output
Median = 3
 

Complexity Analysis :

 

Time Complexity: O((n+m) Log (n+m))
Space Complexity: O(n+m). Since we are creating a new array of size n+m.
 

Solution 4 : Binary Search

 

Approach: The given two arrays are sorted, so we can utilize the ability of Binary Search to divide the array and find the median.

 

Median means the point at which the whole array is divide into two parts. Hence since the two arrays are not merged so to get the median we require merging which is costly. Hence instead of merging we will use below given algorithm to efficiently find median.

 

Algorithm:

 

1. Lets assume that there are two arrays A and B with array A having the minimum number of elements.
   If this is not the case then swap A and B to make A having small size.
2. The edge cases like one array is empty or both are empty will be handled.
3. let n be the size of A and m be the size of B.
   Now think of an idea that if we have to find the median than we have to divide the whole merged array into two parts
   namely left and right parts.
   Now since we are given the size of left part (i.e (n+m+1)/2), Now look at below given example.
   
       A-> 1,2,3,4,5     n = 5
       B-> 1,2,3,4,5,6   m = 6
   
    Here merged array will look like :- 1,1,2,2,3,3,4,4,5,5,6 and median then is 3
    
    Now we can see our left part which is underlined. We divide A and B into two parts such that the 
    sum of left part of both A and B will result in left part of merged array.
    
    A-> 1,2,3,4,5     // pointers l =0 and r = n-1 hence mid = (l+r)/2;
       B -> 1,2,3,4,5,6

    we can see that left part of A is given as n/2 and since total length of left part in merged array
    is (m+n+1)/2, so left part of B = (m+n+1)/2-n/2;
    
    Now we just have to confirm if our left and right partitions in A and B are correct or not.
    
4. Now we have 4 variables indicating four values two from array A and two from array B.
    leftA -> Rightmost element in left part of A = 2
    leftb -> Rightmost element in left part of B = 4
    rightA -> Leftmost element in right part of A = 3
    rightB -> Leftmost element in right part of B = 5
    
    Hence to confirm that partition is correct we have to check the following conditions.
    leftA<=rightB and leftB<=rightA  // This is the case when the sum of two parts of A and B results in left part of merged array
    
    if our partition not works that means we have to  find other mid point in A and then left part in B
    This is seen when
     
    leftA > rightB    //means we have to dec size of A's partition
    so do r = mid-1;
    else
        do l =mid+1;
    
    Hence repeat the above steps with new partitions till we get the answers.
5. If leftA<=rightB and leftB<=rightA
    then we get correct partition and our answer depends on the total size of merged array (i.e. m+n)
    
    If (m+n)%2==0
     ans is max(leftA,leftB)+min(rightA,rightB)/2; // max of left part is nearest to median and min of right part is nearest to medain
    else
     ans is max(leftA,leftB);
 

Hence the above algorithm can be coded as

 


#include <bits/stdc++.h>
using namespace std;
 
// Method to find median
double Median(vector<int>& A, vector<int>& B)
{
    int n = A.size();
    int m = B.size();
    if (n > m)
        return Median(B, A); // Swapping to make A smaller
 
    int start = 0;
    int end = n;
    int realmidinmergedarray = (n + m + 1) / 2;
 
    while (start <= end) {
        int mid = (start + end) / 2;
        int leftAsize = mid;
        int leftBsize = realmidinmergedarray - mid;
        int leftA
            = (leftAsize > 0)
                  ? A[leftAsize - 1]
                  : INT_MIN; // checking overflow of indices
        int leftB
            = (leftBsize > 0) ? B[leftBsize - 1] : INT_MIN;
        int rightA
            = (leftAsize < n) ? A[leftAsize] : INT_MAX;
        int rightB
            = (leftBsize < m) ? B[leftBsize] : INT_MAX;
 
        // if correct partition is done
        if (leftA <= rightB and leftB <= rightA) {
            if ((m + n) % 2 == 0)
                return (max(leftA, leftB)
                        + min(rightA, rightB))
                       / 2.0;
            return max(leftA, leftB);
        }
        else if (leftA > rightB) {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return 0.0;
}
 
// Driver code
int main()
{
    vector<int> arr1 = { -5, 3, 6, 12, 15 };
    vector<int> arr2 = { -12, -10, -6, -3, 4, 10 };
    cout << "Median of the two arrays are" << endl;
    cout << Median(arr1, arr2);
    return 0;
}
 
 

Output
Median of the two arrays are
3
 

Time Complexity: O(min(log m, log n)) : Since binary search is being applied on the smaller of the 2 arrays
Auxiliary Space: O(1)

<h4> OF SAME SIZES </h4>

There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n)). 

median-of-two-arrays

 
Note: Since the size of the set for which we are looking for the median is even (2n), we need to take the average of the middle two numbers and return the floor of the average.
Method 1 (Simply count while Merging) 
Use the merge procedure of merge sort. Keep track of count while comparing elements of two arrays. If count becomes n(For 2n elements), we have reached the median. Take the average of the elements at indexes n-1 and n in the merged array. See the below implementation. 


// A Simple Merge based O(n) solution to find median of
// two sorted arrays
#include <stdio.h>
 
/* This function returns median of ar1[] and ar2[].
   Assumptions in this function:
   Both ar1[] and ar2[] are sorted arrays
   Both have n elements */
int getMedian(int ar1[], int ar2[], int n)
{
    int i = 0;  /* Current index of i/p array ar1[] */
    int j = 0; /* Current index of i/p array ar2[] */
    int count;
    int m1 = -1, m2 = -1;
 
    /* Since there are 2n elements, median will be average
     of elements at index n-1 and n in the array obtained after
     merging ar1 and ar2 */
    for (count = 0; count <= n; count++)
    {
        /*Below is to handle case where all elements of ar1[] are
          smaller than smallest(or first) element of ar2[]*/
        if (i == n)
        {
            m1 = m2;
            m2 = ar2[0];
            break;
        }
 
        /*Below is to handle case where all elements of ar2[] are
          smaller than smallest(or first) element of ar1[]*/
        else if (j == n)
        {
            m1 = m2;
            m2 = ar1[0];
            break;
        }
         /* equals sign because if two
            arrays have some common elements */
        if (ar1[i] <= ar2[j])
        {
            m1 = m2;  /* Store the prev median */
            m2 = ar1[i];
            i++;
        }
        else
        {
            m1 = m2;  /* Store the prev median */
            m2 = ar2[j];
            j++;
        }
    }
 
    return (m1 + m2)/2;
}
 
/* Driver program to test above function */
int main()
{
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
 
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
        printf("Median is %d", getMedian(ar1, ar2, n1));
    else
        printf("Doesn't work for arrays of unequal size");
    getchar();
    return 0;
}
Output : 

Median is 16
Time Complexity : O(n)

Auxiliary Space: O(1)
Method 2 (By comparing the medians of two arrays) 
This method works by first getting medians of the two sorted arrays and then comparing them.
Let ar1 and ar2 be the input arrays. 
Algorithm :  

 
1) Calculate the medians m1 and m2 of the input arrays ar1[] 
   and ar2[] respectively.
2) If m1 and m2 both are equal then we are done.
     return m1 (or m2)
3) If m1 is greater than m2, then median is present in one 
   of the below two subarrays.
    a)  From first element of ar1 to m1 (ar1[0...|_n/2_|])
    b)  From m2 to last element of ar2  (ar2[|_n/2_|...n-1])
4) If m2 is greater than m1, then median is present in one    
   of the below two subarrays.
   a)  From m1 to last element of ar1  (ar1[|_n/2_|...n-1])
   b)  From first element of ar2 to m2 (ar2[0...|_n/2_|])
5) Repeat the above process until size of both the subarrays 
   becomes 2.
6) If size of the two arrays is 2 then use below formula to get 
  the median.
    Median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
Examples :  

   ar1[] = {1, 12, 15, 26, 38}
   ar2[] = {2, 13, 17, 30, 45}
For above two arrays m1 = 15 and m2 = 17
For the above ar1[] and ar2[], m1 is smaller than m2. So median is present in one of the following two subarrays. 

   [15, 26, 38] and [2, 13, 17]
Let us repeat the process for above two subarrays:  

    m1 = 26 m2 = 13.
m1 is greater than m2. So the subarrays become  

  [15, 26] and [13, 17]
Now size is 2, so median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
                       = (max(15, 13) + min(26, 17))/2 
                       = (15 + 17)/2
                       = 16
Implementation : 


// A divide and conquer based efficient solution to find median
// of two sorted arrays of same size.
#include<bits/stdc++.h>
using namespace std;
 
int median(int [], int); /* to get median of a sorted array */
 
/* This function returns median of ar1[] and ar2[].
   Assumptions in this function:
   Both ar1[] and ar2[] are sorted arrays
   Both have n elements */
int getMedian(int ar1[], int ar2[], int n)
{
    /* return -1  for invalid input */
    if (n <= 0)
        return -1;
    if (n == 1)
        return (ar1[0] + ar2[0])/2;
    if (n == 2)
        return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2;
 
    int m1 = median(ar1, n); /* get the median of the first array */
    int m2 = median(ar2, n); /* get the median of the second array */
 
    /* If medians are equal then return either m1 or m2 */
    if (m1 == m2)
        return m1;
 
    /* if m1 < m2 then median must exist in ar1[m1....] and
        ar2[....m2] */
    if (m1 < m2)
    {
        if (n % 2 == 0)
            return getMedian(ar1 + n/2 - 1, ar2, n - n/2 +1);
        return getMedian(ar1 + n/2, ar2, n - n/2);
    }
 
    /* if m1 > m2 then median must exist in ar1[....m1] and
        ar2[m2...] */
    if (n % 2 == 0)
        return getMedian(ar2 + n/2 - 1, ar1, n - n/2 + 1);
    return getMedian(ar2 + n/2, ar1, n - n/2);
}
 
/* Function to get median of a sorted array */
int median(int arr[], int n)
{
    if (n%2 == 0)
        return (arr[n/2] + arr[n/2-1])/2;
    else
        return arr[n/2];
}
 
/* Driver program to test above function */
int main()
{
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
        printf("Median is %d", getMedian(ar1, ar2, n1));
    else
        printf("Doesn't work for arrays of unequal size");
    return 0;
}
Output : 

Median is 5
Time Complexity : O(logn) 

Auxiliary Space: O(1)
Algorithmic Paradigm: Divide and Conquer 

Method 3 (By taking union w/o extra space)

This method works by taking the union of two arrays without extra space and then sorting them.

Algorithm : 

1) Take the union of the input arrays ar1[] and ar2[].
2) Sort ar1[] and ar2[] respectively.
3) The median will be the last element of ar1[] + the first
   element of ar2[] divided by 2. [(ar1[n-1] + ar2[0])/2].
  Implementation :


// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
/* This function returns
median of ar1[] and ar2[].
Assumptions in this function:
Both ar1[] and ar2[]
are sorted arrays
Both have n elements */
int getMedian(int ar1[], int ar2[], int n)
{
    int j = 0;
    int i = n - 1;
    while (ar1[i] > ar2[j] && j < n && i > -1)
        swap(ar1[i--], ar2[j++]);
    sort(ar1, ar1 + n);
    sort(ar2, ar2 + n);
    return (ar1[n - 1] + ar2[0]) / 2;
}
 
// Driver Code
int main()
{
    int ar1[] = { 1, 12, 15, 26, 38 };
    int ar2[] = { 2, 13, 17, 30, 45 };
 
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    if (n1 == n2)
        cout << "Median is " << getMedian(ar1, ar2, n1);
    else
        cout << "Doesn't work for arrays"
             << " of unequal size";
    getchar();
    return 0;
}
 
// This code is contributed
// by Lakshay
Output
Median is 16
Time Complexity: O(nlogn)

Auxiliary Space: O(1)