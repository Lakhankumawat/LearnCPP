# Fisher-Yates Shuffling Algorithm



The Fisher–Yates shuffle is an algorithm for generating a random permutation of a finite sequence—in plain terms, the algorithm shuffles the sequence. The algorithm effectively puts all the elements into a hat; it continually determines the next element by randomly drawing an element from the hat until no elements remain. The algorithm produces an unbiased permutation: every permutation is equally likely.

## _Logic Associated_ :

- Write down the numbers from 1 through N.
- Pick a random number k between one and the number of unstruck numbers remaining (inclusive).
- Counting from the low end, strike out the kth number not yet struck out, and write it down at     the end of a separate list.
- Repeat from step 2 until all the numbers have been struck out.
- The sequence of numbers written down in step 3 is now a random permutation of the original      numbers.






```sh
— To shuffle an array ‘a’ of ‘n’ elements:
    for i from 0 to n-2 do
    j = random integer such that i <= j < n
    exchange a[i] and a[j]
```

For eg :

```sh
Input: arr[]=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
Output:[8, 11, 6, 7, 12, 9, 1, 5, 4, 2, 3, 10]
```


