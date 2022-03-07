# Sieve of Eratosthenes
![gssoc](https://user-images.githubusercontent.com/95519167/156644642-9359f3d3-d87c-41c1-b400-be97ed386829.jpg)

Sieve of Eratosthenes is an algorithm for finding all prime numbers up to any given limit in an optimised way.
In this method we iteratively mark all the multiples of each prime number starting with the first prime number 2. Unmarked numbers give us the required set of prime numbers within the given limit.
## Sieve Algorithm:
Suppose we are given a limit n, upto which we have to find all prime numbers.
1. Create an array or a vector of size n+1 and initialize all of them as unmarked.
2. Start with the first prime number i.e 2 and mark all its multiples which are greater than or equal to the square of it.
3. Now move to the next unmarked number which is 3. Mark all its multiples which are greater than or equal to the square of it.
4. Continue this process upto the number which is less than or equal to the square root of the given limit.
5. All the unmarked numbers give us a set of prime numbers within the limit n.

<br />Time Complexity: O(n*log(log (n)))
<br />Space Complexity: O(n)
## Variations of Sieve of Eratosthenes:
## 1. Finding all the prime numbers upto a given number n
All the unmarked numbers we get after applying this method are the prime numbers within the limit n.
![2022-03-04 (3)](https://user-images.githubusercontent.com/95519167/156646277-931f117d-d263-4467-bdf7-1bfcbfc12e9a.png)

<br />Output

![2022-03-04](https://user-images.githubusercontent.com/95519167/156646807-2d425070-f2ad-4374-a0e5-c02e57cf02af.png)
<br />
## 2. Finding the prime factorization of a given number
We can find the prime factorization of a given number in an efficient way using the concept of sieve.
To find the prime factorization of a number n:
1. We first make an array/vector of size n+1 and for each array element we assign the value equal to the index itself. 
2. Then for the value of indices which are the multiples of 2 and are greater than or equal to the square of 2, we assign their values equal to 2.
3. Repeat this process for all the values of indices whose array value is equal to the index itself upto the number whose square is less than or equal to n.
4. In this way for each number, we have its smallest prime factor stored in array corresponding to its index. 
5. To get the prime factorization of n, make a while loop. Print the array value corresponding to its index and then divide it by its smallest prime factor. Continue this process until n becomes 1.

![2022-03-03 (2)](https://user-images.githubusercontent.com/95519167/156647452-24abf9db-08eb-4bc5-ac25-a67e3408103a.png)

<br />Output

![2022-03-04 (1)](https://user-images.githubusercontent.com/95519167/156647717-e70ff237-cac7-4d29-b295-8bc1f31cb264.png)

<br />Practice problem based on sieve of eratosthenes here:
https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1/

