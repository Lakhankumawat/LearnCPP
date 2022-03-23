
## [1. Best Time to Buy And Sell Stock](https://github.com/PrashantVIT1/LearnCPP/blob/main/A-Array/Stock%20Buy%20And%20Sell.cpp)
<pre>
The problem states that there is an array or vector that contains N elements and elements stores stocks price at that day.
For example:
Let the array be [7,1,5,3,6,4]
Then i=0 stores stocks price at 1st day that is 7.
</pre>

* Then part of the problem states that you can not sell before buying and that means we can not `sell at i=0 and buy at i=1 for profit of 6`.</li>
* The next part of the problem is if it can not have a profit then return 0 meaning `if no profit don't buy anything`</li>
* example:
<pre>
           Input :[7,1] 
           Output: 0
</pre>
## Algorithm

* 1<sup>st</sup> initiate the buying price as `INT_MAX` as we want to minimize it in later steps. Let us say `buying price` be b
* 2<sup>nd</sup> initiate the maximum profit as `0` as it is given in the problem to return 0 if in case of no profit. Let us say `maximum profit` be p.
* 3<sup>rd</sup> Now iterate over the array or vector if current element at `i is smaller then the previous element` then update b to that element.
* 4<sup>th</sup> Check wether the differece of current b with the current element is lager than previous value then update the p value to the value of differnce.
* 5<sup>th</sup> continue 3<sup>rd</sup> and 4<sup>th</sup> step till the lenth of the array or vector.
>My Output
>![image](https://user-images.githubusercontent.com/75080313/159704449-96988e82-61de-4605-8ec4-d2f23b8fbf68.png)


## Complexity
<pre>
Time complexity: O(n) 
Space complexity: O(1) 
</pre>
