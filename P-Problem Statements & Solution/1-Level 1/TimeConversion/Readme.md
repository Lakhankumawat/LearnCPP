# Time Conversion #

## Table of Contents:-
* [Problem Statement](#problem-statement)
* [Explanation of Problem Statement](#explanation-of-problem-statement-with-a-test-case)
* [Approach](#approach)
* [Algorithm](#algorithm)
* [Time Complexity](#time-complexity)

## Problem Statement
Your challenge consists of writing a computer program that asks the end-user to enter a time in the 24-hour format (e.g. 18:36). The program will convert this time in the 12-hour format (e.g. 6:36 PM).

### Explanation of Problem Statement with a test case
Let's say the time is 10:20:30 PM it is 12 hour format. We need to convert it to 24 hour format which is 22:20:30.


### Approach
* First we need to get the time from the user in HH:MM:SS AM/PM format
* Then we need to check whether it is AM or PM. If it is PM then we need to add 12 hours to the time and then remove the median. If it is AM we just need to remove the AM
* If the time equals to 12 we need to convert it to 00 in AM and put it as 12 if it is in PM

### Algorithm
``` 
  Start:
    Step 1: Enter time in 24 hr format
    Step 2: check the condition
      i. If(hour==0)
         Print min
     Ii. Elseif(hour<12)
          Print hour,min
    iii. Elseif(hour==12
         Print hour,min
     iv. Else
         Print hour % 12,min
  Stop:   
```
### Time Complexity
For converting the 12hour format to 24 hour format it takes O(N). So the time complexity of our algorithm is O(N)