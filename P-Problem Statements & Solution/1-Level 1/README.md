# Table of contents:
- [Convert 24hr to 12 hr time format](Convert-24hr-time-to-12-hr-time-Format)
- Counting Frequencies
- LowercaseToUppercase
- Maximum size of k Window
- Two pointer on Doubly Linked List

# Convert 24hr time to 12 hr time Format:

## Approach

  The approach to solving this problem requires some observations.
* First that the minutes and seconds will be same in both the cases.
* The only change will be in the hours and according to that <pre>Meridien(i.e. AM/PM)</pre> will be appended to the string.
* For hours, first convert it from string to int datatype, then take its modulo with 12 and that will be our hours in 12-hour format. Still, there will be a case when hour becomes 00 i.e (12 or 00 in 24-hour format) which we need to handle separately.

## Complexity
<pre>
Time Complexity  : O(1)
Space Complexity : O(1)
</pre>
