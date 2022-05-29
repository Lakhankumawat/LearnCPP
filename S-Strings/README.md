<!-- Table of contents  -->

# Table of content
- [String Comparison](#string-comparison)
- [Longest Word in Sentence](#longest-word-in-sentence)
- [Count the Occurence of particular Chararacter in Sentence](#counts-the-occurence-of-particular-chararacter-in-sentence)
- [Roman to Decimal](#roman-to-decimal)


# String Comparison

Most string comparison algorithms compare the strings character by character. C++ provides us some built in operators like == and != to compare strings along with strcmp and compare functions.

![image](https://user-images.githubusercontent.com/100208233/162633708-61773b59-35ff-4290-bc66-0d370ed42645.png)

![image](https://user-images.githubusercontent.com/100208233/162752958-b3be8277-195f-4b86-8b38-950dfaf7a6e8.png)


## Example:

### Example1:
Suppose there are two strings :
string1: HELLO WORLD
string2: HELLO
in these two strings 1st string contains "HELLO WORLD" but the 2nd string does not contain the word "WORLD" so,these two string are not equal.

### Example2:
Suppose there are two strings :
string1: HELLO WORLD
string2: HELLO WORLD
Here both the strings contain the same word "HELLO WORLD" hence both the strings are same.  

## Application :
For example, consider a website having two fields ‘Email’ & ‘Confirm Email’. It would have to use some sort of string comparison in order to confirm whether both the entered email strings are equal or not.

## Algorithim :
1. Decelare two strings.
2. take the input of two strings.
3. comparing the two strings we can use any of the three methords mentioned below.

## Ways to compare strings :
1. strcmp() inbuilt function
2. compare() inbuilt function, and
3. C++ relational operators ( ‘==’, ‘!=’)

# Longest Word In Sentence

In this Problem we have to print the word that is `Longest word` in the sentence which is given as the input .

## Concepts Used

1. getline() :- This is to take sentence as the input.
2. cin.ignore() :- This is used to clear the buffer in the input stream.

## Examples

### Example1:
Input : "This is a GSSOC'22" \
Output : Maximum length word: GSSOC'22

### Example2:
Input : "Open Source is best way to enhance your knowledge" \
Output : Maximum length word: knowledge 

## Approach

- Idea is simple, we traverse the given string and when we find end of word.
- Then we compare length of word which is ended with result length.
- Otherwise we increment length of current word.
- We also take an variable which take care of the longest word starting and ending.
  - In this we update the `max_length` and the `max_start_index` ( which points to the starting of the maximum length word).
- At the end we print the word , which is longest with its length.

**Note :-** For taking sentence we have to use `getline()` function . We also have to use `cin.ignore()` to clear the input buffer.

## Time and Space Complexity

- **Time Complexity :-** O(n) n is the length of string or sentence.
- **Space Complexity :-** O(n) n is the length of sentence.


## Counts the Occurence of particular Chararacter in Sentence
- In this problem the cout of occurrence of every character present in the input sentence is displayed .

<!-- image to help better explain the concept -->

![Counts the Occurence of particular Chararacter in Sentence](https://www.shristitechlabs.com/wp-content/uploads/2019/05/totalcharacters.png)

### Examples of count character occurrence
1. - Input : example one !
   - Output : "e" : 3 , "x" : 1, "a" : 1, "m" : 1,  "p" : 1, "l" : 1,  " " : 2,  "o" : 1, "n" : 1,  "!" : 1

### Algorithm of count character occurrence
```
countEachChar(str){
1. initialized counter array of 256 size

2. for 0 to lenght of string do

  - increment element for particular characters
  - i++

3. initialized array of string size

4. for 0 to length of string do
  - array[i]=str[i];
  - int flag =0;
  - for 0 to i do
    - if str[i]=array[j] then flag++
    - j++
  - display character count of occurrence only for flag value 1 so that all character occurrence display only once
}

```

### Properties of count character occurrence

- Time Complexity: O(n^2), where n is the size of sentence .

- Space Complexity: O(n) , where n is the size of sentence .

# Roman To Decimal

## Problem Statement
Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I :1, V : 5 X : 10 L : 50 C :100 D : 500 M : 1000

## Examples :

### Example 1 : 
Input: s = V \
Output: 5

### Example 2 : 
Input: III \
Output: 3

![image](https://user-images.githubusercontent.com/94742536/169452774-8d033d92-c614-44cc-b401-ce79b63c3f91.png)


## Algorithm
- We have to convert Roman to Decimal.
- First, we have to declare and enter a string which will depict the roman numeral.
- Then we have called the romanDec() function which will convert the roman numeral to decimal .
- In romanDec() function we will loop the string from right to left.
- We will use prev to keep track of previous value.
- We will compare cureent value and previous value,
- If the current value is small then subtract it.
- If the current value is equal or larger then add it.
- Then we will update the value of previous as the value of current symbol.

## Time Complexity
- Time Complexity : O(N)
## Space Complexity
- Space Complexity : O(1) 
