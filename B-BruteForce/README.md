# Table of contents:
- [Calculating New Discounted Price](#counting-new-discounted-price)



# [Calculating New Discounted Price](https://github.com/PrashantVIT1/LearnCPP/blob/main/A-Array/CountingDivisibleSubstrings.cpp)

Question:<br>

A shopkeeper sells an object at some price p . To increase the sales of the object he decides to offer a discount of d% on the object . Calculate the new discounted price for which the customer buys the good .

Input Format

The first line contains an integer, p, denoting the original price of object.

The next line contains an integer, d, denoting that d% id the discount percent.

Constraints

1 <= p <= 10^5

0 <= d <= 100

Notes:
* The above problem is solved using Brute Force approach .



## Algorithm
* 1<sup>st</sup> Calculate the d% of the original price p
* 2<sup>nd</sup> Subtract this d% of p from the original price p to get the new price p'.
* 3<sup>rd</sup> p'= p - (d*p/100);
* 4<sup>th</sup> Print this new discounted price p'.


## Complexity
<pre>
Time complexity: O(1) 
Space complexity: O(1) 
</pre>
