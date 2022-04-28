<!-- Table of contents  -->
-[stringcomparison](#string-comparison)
-[example](#example)
-[algorithim](#algorithim)
-[application](#application)

## Longest Word in Sentence
- [Longest word in sentence](#longest-word-in-sentence)
- [Example](#examples)
- [Approach](#approach)
- [Time and Space Complexity](#time-and-space-complexity)


# String Comparison:
Most string comparison algorithms compare the strings character by character. C++ provides us some built in operators like == and != to compare strings along with strcmp and compare functions.

![image](https://user-images.githubusercontent.com/100208233/162633708-61773b59-35ff-4290-bc66-0d370ed42645.png)

![image](https://user-images.githubusercontent.com/100208233/162752958-b3be8277-195f-4b86-8b38-950dfaf7a6e8.png)


# Example:

## Example1:
Suppose there are two strings :
string1: HELLO WORLD
string2: HELLO
in these two strings 1st string contains "HELLO WORLD" but the 2nd string does not contain the word "WORLD" so,these two string are not equal.

## Example2:
Suppose there are two strings :
string1: HELLO WORLD
string2: HELLO WORLD
Here both the strings contain the same word "HELLO WORLD" hence both the strings are same.  

# Application :
For example, consider a website having two fields ‘Email’ & ‘Confirm Email’. It would have to use some sort of string comparison in order to confirm whether both the entered email strings are equal or not.

# Algorithim :
1. Decelare two strings.
2. take the input of two strings.
3. comparing the two strings we can use any of the three methords mentioned below.

# Ways to compare strings :
1. strcmp() inbuilt function
2. compare() inbuilt function, and
3. C++ relational operators ( ‘==’, ‘!=’)

# Longest Word In Sentence

In this Problem we have to print the word that is `Longest word` in the sentence which is given as the input .

## Consepts Used

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
