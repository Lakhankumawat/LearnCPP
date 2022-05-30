# Table of contents:
- [Calculating New Discounted Price](#counting-new-discounted-price)
- [Watermelon Problem Codeforces](#watermelon-problem-codeforces)



# [Calculating New Discounted Price](https://github.com/Lakhankumawat/LearnCPP/blob/discount/B-BruteForce/discountedPrice.cpp)

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



# [Watermelon Problem Codeforces](https://github.com/Lakhankumawat/LearnCPP/blob/watermelon/B-BruteForce/watermelon.cpp)

Question:<br>

(https://codeforces.com/problemset/problem/4/A)

Input Format

The first input line contains integer number w  — the weight of the watermelon bought by the boys.

Constraints

1 ≤ w ≤ 100


Notes:
* The above problem is solved using Brute Force approach .



## Algorithm
* 1<sup>st</sup> If the given weight of watermelon is odd , we cannot divide it into two boys such that each boy gets an even weight of watermelon .
* 2<sup>nd</sup> If the given weight of watermelon is an even number except 2 , we can divide it into two boys such that each boy gets an even weight of watermelon .
* 3<sup>rd</sup> If the given weight of watermelon is 2 , we cannot divide it into two boys such that each boy gets an even weight of watermelon because for 2 , only one division of weight is possible i.e. into pieces of weight 1 each which is an odd number .



## Complexity
<pre>
Time complexity: O(1) 
Space complexity: O(1) 
</pre>

