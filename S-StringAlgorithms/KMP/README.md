
<!-- Table of content -->
### Table of content
-[Problem_statement](#problemstatement)
-[KMP_Algorithm](#kmpalgorithm)
-[Algorithm](#algorithm)
-[Complexity_Analysis](#complexityanalysis)

### Problem statement

Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.

Examples:

Input: str[] = “THIS IS A TEXT”
pat[] = “TEXT”

Output: Pattern found at index 10.



### KMP Algorithm

The KMP calculation utilizes the deteriorating property (design having the same sub-designs showing up more than once in the example) of the example and further develops the most pessimistic scenario running time complexity to O(n). The thought for the KMP calculation is: at whatever point the string gets mismatched, we definitely know a portion of the characters in the text of the following window. We will exploit this data to try not to coordinate with the characters that we realize will coordinate.

### Algorithm

Unlike Naive algorithm, where we slide the pattern by one and compare all characters at each shift, we use a value from lps[] to decide the next characters to be matched. The idea is to not match a character that we know will anyway match.

How to use lps[] to decide next positions (or to know a number of characters to be skipped)?

We start comparison of pat[j] with j = 0 with characters of current window of text.
We keep matching characters txt[i] and pat[j] and keep incrementing i and j while pat[j] and txt[i] keep matching.
When we see a mismatch
We know that characters pat[0..j-1] match with txt[i-j…i-1] (Note that j starts with 0 and increment it only when there is a match).
We also know (from above definition) that lps[j-1] is count of characters of pat[0…j-1] that are both proper prefix and suffix.
From above two points, we can conclude that we do not need to match these lps[j-1] characters with txt[i-j…i-1] because we know that these characters will anyway match. Let us consider above example to understand this.
 ![kmped](https://user-images.githubusercontent.com/91210199/164911136-c063849b-65e3-4c60-9235-cdd64367b0f7.jpg)



### Complexity Analysis

Time Complexity: O(n) in the worst case where n is the length of text.
Space Complexity: O(m) where m is the size of the pattern.
