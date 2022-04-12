# Table of content

- [InputArray](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/inputArray.cpp)
- [SmallestLargest](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/SmallestLargest.cpp)
- [MinDiffPair](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/minDiffPair.cpp)
- [PalindromeArray](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/palindromeArray.cpp)
- [ReverseArray](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/reverseArray.cpp)
- [Array2D](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/array2D.cpp)
- [RowwiseSum](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/rowwiseSum.cpp)
- [ColumnWiseSum](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/columnWiseSum.cpp)
- [SymmetricMatrix](https://github.com/prachi0011/LearnCPP/tree/main/A-Array/ArrayBasicPrograms/symmetricMatrix.cpp)

# InputArray

### **Question: Program to input an array using command line and traverse array elements**
Algorithm:
- 1. Initialize variable n representing size of array.
- 2. Initialize array of size n.
- 3. Ask user to input size of array
- 4. loop for i=0, i<n, i++
- 5. for each iteration, take input and store it in array[i].
- 6. Loop again for i=0, i<n,i++.
- 7. for each iteration print array[i].

Input Format 
- First line contains n, size of array.
- Second line contain n space seperated integer.

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|5              | 1 2 3 4 5 | 
|1 2 3 4 5 |          |
| **B** |
|6              | 2 4 6 8 10 12 | 
|2 4 6 8 10 12 |    |            

#### Time complexity : O(n)
#### Space complexity : O(n)

# SmallestLargest
Question: **Find the largest and smallest elements of an array.**
### Flowchart
<img src="https://th.bing.com/th/id/OIP.lr5ClhaJhLdzk4ciwJBe-AHaJI?pid=ImgDet&rs=1" width:55px height:70px align:left></img> <br>

## Algorithm
1. Create two intermediate variables small and large.
2. Initialize the small and large variable with arr[0].
3. Now traverse the array iteratively and keep track of the smallest and largest element until the end of the array. 
4. In the last you will get the smallest and largest number in the variable small and large respectively. 
5. print both variables using the printf a library function.


| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|6 | largest : 9|
| 8 4 7 1 3 9     | smallest : 1| 
| **B** |
|6              | largest : 12 | 
|2 4 6 8 10 12 |  smallest : 2  | 

#### Time complexity : O(n)


# MinDiffPair
Question : **Write a program to find the minimum difference between pairs of elements.**
<img src="https://th.bing.com/th/id/OIP.bMc7PzsDTRm4rItEDfdNtAHaDj?pid=ImgDet&rs=1" width:65px height:50px></img>
#### Algorithm
- Step 1 : Initialize diff = INT_MAX(maximum size of  size)
- Step 2 : Loop for i=0, i<n-1,i++
- Step 3 : inner loop for j=i+!, j<n, j++
- Step 4 : check if (abs(arr[i] - arr[j]) < diff)
- Step 5 : if true update diff=abs(arr[i]-arr[j]
- Step 6 : print diff

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|6 | |
| 1, 5, 3, 19, 18, 25   | 1| 
| **B** |
|4            |  | 
|30, 5, 20, 9 |  4  | 

#### time complexity : O(n^2)

# PalindromeArray
Question : **Write a program to check if array is palindrome or not(elements of an array are same or not it read from front or back**
![image](https://user-images.githubusercontent.com/60473704/163015941-1ebcaf61-b5ae-4b63-afbb-715bdaee04bc.png)

### Psudeo Code
<pre>
Start
   Step 1-> initialize i, j=n-1, flag and assign flag as 1
   Step 2-> Loop For i = 0 i< n/2 and i++
      If arr[i]!=arr[j] then,
         Set flag as 0
            Break
      End If
   End Loop
   Step 3-> If flag == 1 then,
      Print “Array is palindrome”
   Step 4-> Else
      Print “Array is not palindrome”
End 
</pre>
| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|5 | |
| 1 2 4 1 2   | Array is palindrome | 
| **B** |
|5            |  | 
| 1, 2, 3, 4, 5 |  Array is not palindrome  |

#### Time Complexity : O(n)

# ReverseArray
Question : **Program to Reverse array without using extra array**
![image](https://user-images.githubusercontent.com/60473704/163016635-4bd08533-f11c-446d-97c7-ec3e824c86f3.png)

### Algorithm
-	Take an array arr[] of size n.
-	For each index in array arr[] till half swap the value of the element at index i with n-i-1, like swapping the value of the first element with last element, second with second last.
-	Proceeding the above step till half the size of arr[] we will get final array in reverse order

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|5 | |
| 1 2 3 4 5   | 5 4 3 2 1 | 
| **B** |
| 4          |  | 
| 30 5 20 9 |  9 20 5 30  |

In this method, we have not used any auxiliary array to fulfill the purpose, hence this method is an in-place algorithm.

# Array2D
### **Question: Program to input an array using command line and traverse array elements**
Algorithm:
- 1. Initialize variables n,m representing row and column size of array.
- 2. Initialize array of size nxm.
- 3. Ask user to input value for n and m.
- 4. loop for i=0, i<n, i++
- 5. inner loop j=0, j<m,j++
- 6. for each iteration, take input and store it in array[i][j].
- 7. Loop again for i=0, i<n,i++.
- 8. inner loop j=0, j<m,j++
- 9. for each iteration print array[i][j].

Input Format 
- First line contains n,m row and column size of array.
- Second line contain n*m space seperated integer.

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|3 3            | 1 2 3  | 
|1 2 3 4 5 6 7 8 9| 4 5 6     |
|  | 7 8 9 |
| **B** |
|2 3             | 2 4 6  | 
|2 4 6 8 10 12 | 8 10 12   |            

#### Time complexity : O(n*m)
#### Space complexity : O(n*m)

# RowwiseSum
Question : **Program to find the row wise sum of elements of array.**
<img src="https://cdn1.knowledgeboat.com/img/ac10/ac10-array-dda-row-wise-sum-600.webp" width:50px height:38px></img><br>

Algorithm
- First, we declare an int variable sum and initialize it to zero. sum will hold the sum of all elements of the array. 
- Next, we have the outer loop for the rows of the array and inner loop for the columns. 
- With the help of these two loops, we traverse the array row-wise and add each element of the array to the int variable sum. 
- To compute the sum of each row, we declare another int variable rSum just before the inner loop starts and initialize it to zero.
-  Inside the inner loop we add the elements of the row to rSum. Once the inner loop completes executing, we have sum of the row in rSum. 
-  We then print it outside the inner loop. 
-  As rSum is declared inside the outer loop, it is initialized to zero with each iteration of the outer loop. 
-  This way, each iteration of outer loop computes and prints the sum of the corresponding row of the double dimensional array arr.

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|3 3            |6   | 
|1 2 3 4 5 6 7 8 9| 15     |
|  | 7 8 9 |
| **B** |
|2 3             | 12  | 
|2 4 6 8 10 12 | 30   |



# ColumnWiseSum
Question : **Program to find the column wise sum of elements of array.**
<img src="https://cdn1.knowledgeboat.com/img/ac10/ac10-array-dda-column-wise-sum-600.webp" width:45px height:35px></img> <br>
Algorithm
- Column-Wise sum is like row-wise sum, just that now we need to traverse the double dimensional array column-wise rather than row-wise. 
- To do this, we will again use two loops, but the outer loop will run for the number of columns and inner loop will run for the number of rows. 
- Note that this is opposite to row-wise sum, there outer loop was running for number of rows and inner loop was running for number of columns. 
- Now we need to go over the array column-wise so outer loop will run for number of columns and inner loop will run for number of rows.
- The int variable cSum is like the rSum variable we saw earlier. 
- It will accumulate the sum of each column. 
- In the inner loop, we go over each element of the corresponding column and add it to cSum. 
- Note that, in the line cSum += arr[j][i]; the first subscript of arr is j and second is i unlike row-wise sum where i was first and j was second. 
- Once the inner loop completes executing, we have sum of the column in cSum. 
- We then print it outside the inner loop. 
- Each iteration of outer loop computes and prints the sum of the corresponding column of the double dimensional array arr.

| Sample Input | Sample Output |
|------------- | --------------|
| **A** |
|3 3            | 5 7 9  | 
|1 2 3 4 5 6 7 8 9|      |
|  | 7 8 9 |
| **B** |
|2 3             | 10 14 18  | 
|2 4 6 8 10 12 |   |

# SymmetricMatrix
Question : Program to check if matrix is symmetric or not.
- A square matrix is said to be symmetric matrix if the transpose of the matrix is same as the given matrix. 
Symmetric matrix can be obtain by changing row to column and column to row
<img src="https://3.bp.blogspot.com/-WwIQv_C6tYU/W11sZOL96fI/AAAAAAAAIV8/rfUJ4p59ho8cc5EoGN5ExPTFwgfJGir1wCLcBGAs/w1200-h630-p-k-no-nu/Symmetric%2BMatrix.jpg"
width:60px height:45px>
</img><br>

### Algorithm to find symmetric matrix
**Let inputMatrix is an integer matrix having N rows and M columns.**

- Find transpose matrix of inputMatrix and store it in transposeMatrix. Check this C program to find transpose of a matrix.
- Compare inputMatrix and transposeMatric. Check this C program to compare two matrix
- If both matrices are equal then inputMatrix is symmetric matrix otherwise not a symmetric matrix

- Time Complexity : O(N x N) 
- Auxiliary Space : O(1)

