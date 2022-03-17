# Score of parenthesis

Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.

### ALGORITHM : 

1. "()" has a score of 1.

2. "xy" has a score of x + y , here x & y are balanced pairs of balanced parenthese.

3. "(x) " has a score of x , (i.e) 2 * score of x.
Example.
Input: str = “()()”
Output: 2
Explanation: There are are two individual pairs of balanced parenthesis “() ()”. Therefore, score = score of “()” + score of “()” = 1 + 1 = 2

Input: str = “(())”
Output: 2

Explanation: Since the input is of the form “(x)”, the total score = 2 * score of “()” = 2 * 1 = 2

- Take a Stack, Iterate over the characters of string.
- For every ith character check if the character is ‘(‘ or not. If found to be true, then insert the character score into the stack.
- Initialize a stack to store the current traversed character score of inner balanced parenthesis.
- For every i check for the conditions.
    - if the current character is '(' push the current score into stack , enter the next inner layer and reset score to 0.
    - if the current character is ')' then ind score will be doubled and will be at least one .
    - we exit the current level and set ind = stack.top() + max(ind * 2, 1).
    - and pop the score from the stack.

### ANALYSIS :

Time Complexity : O(N)

Space Complexity : O(N)


### Problem Link : (https://leetcode.com/problems/score-of-parentheses/)
