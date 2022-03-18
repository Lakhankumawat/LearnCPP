# Redundant Parenthesis
Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print True if redundant, else False.
Note: Expression may contain ‘+‘, ‘*‘, ‘–‘ and ‘/‘ operators. Given expression is valid and there are no white spaces present.
For example:
- ((a+b)) can reduced to (a+b), this is Redundant
- (a+b*(c-d)) doesn't have any redundant or multiple
brackets


## Terms Explained:
Stack : Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). Click
[here](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/stack.png)

Redundant : The expression should not have extra brackets.


## Approach
We will use stack as a data structure to solve this problem.
1. We iterate through the given expression and for each character in the expression, if the character is an open parenthesis ‘(‘ or any operators, we push it to the stack.
2. If the character is close parenthesis ‘)’, then pop characters from the stack till matching open parenthesis ‘(‘ is found. 


## Algorithm
for(int i=0;i<s.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.top() == '('){
                ans = true;
            }
            while(st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }


## Properties
# Time Complexity: O(n)
- Only one traversal of the loop is needed.

# Space Complexity: O(n)
- There is extra space required.


## Advantages
- Problem is solved in O(N) time complexity.
- Stack made it easier to understand.


## Disadvantages
- There is extra space required.
