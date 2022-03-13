seive of Eratossthenes
algorith to find Prime number in given range

Following is the algorithm to find all the prime numbers less than or equal to a given integer n by the Eratosthene’s method:
When the algorithm terminates, all the numbers in the list that are not marked are prime.

Explanation with Example:

Let us take an example when n = 50. So we need to print all prime numbers smaller than or equal to 50.

We create a list of all numbers from 2 to 50.

According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it.

Now we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the square of it.

We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.

We continue this process and our final table will look like below:

2 3 5 7 11 13 17 19 23 29 31 37 41 43 47  these all are unmarked numbers and they are prime number less than 50