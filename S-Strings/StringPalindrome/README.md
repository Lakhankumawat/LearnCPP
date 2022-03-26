# Table of Content
- StringPalindrome


# StringPalindrome
Given a string S, check if it is palindrome or not. If the given string is a palindrome, then print "True". Otherwise, print "False".
- Example 1:
Input: S = "abba"
Output: True
Explanation: The reverse of the given string is equal to the "abba" which is equal to the given string. Therefore, the given string is palindrome.
- Example 2:
Input: S = "abc"
Output: False
Explanation: The reverse of the given string is equal to the "cba" which is equal to the given string. Therefore, the given string is palindrome.


# Terms Explained:
### Palindrome - A string is said to be palindrome if the reverse of the string is the same as the string. For example: 
- abba is palindrome as reverse of it is also abba.
- frog is not palindrome as reverse of it is gorf.
![image](https://www.google.com/url?sa=i&url=https%3A%2F%2Fjavacodekorner.blogspot.com%2F2019%2F07%2Fjava-program-for-string-and-number-palindrome.html&psig=AOvVaw1g7sJzi1C45vVr1nxMJjwD&ust=1648387296255000&source=images&cd=vfe&ved=0CAsQjRxqFwoTCMjNmq_v4_YCFQAAAAAdAAAAABAJ)


# Algorithm
The approach is to traverse the string and checking whether the character at ith index is equal to the character at the (N-i-1)th index for every index in the range [0, N/2]. Follow the steps below to solve the problem:

- Iterate over the range [0, N/2], using the variable i and in each iteration check if the character at index i and N-i-1 are not equal, then return "False" from the function.
- If none of the above cases satisfy, then return "True".


# Properties
## Time Complexity: O(Length of S)
- Only one traversal of the loop is needed.
## Space Complexity: O(1)
- There is no extra space required.


# Advantages
- Problem is solved in O(Length of S) time complexity.
- There is no extra space required.


## You can checkout different approaches to solve this problem at [geeksforgeeks](https://www.geeksforgeeks.org/c-program-to-check-if-a-given-string-is-palindrome-or-not/)
