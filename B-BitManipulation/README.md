# Table of content
- [Subsets Generation using Bit Masking](#subsets-generation-using-bit-masking)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Space Complexity](#space-complexity)
    - [Tests](#output)



## Subsets Generation using Bit Masking
Algorithm that uses bit masking to generate all possible subsets from a given array with a chosen data type.<br>

### Algorithm
<pre>
1) template is used to give the flexibility of chooseing the data type.
2) Create 2D vector of size (1<<(array size)) = 2^(array size)
3) Loop on all masks of size (2^(array size))
4) In each mask iteration loop on the given array
5) if((mask >> i) & 1) is the i-th bit of this mask 1?
    true: push in result vector of mask as index the array element.
    false: continue
</pre>

### Time Complexity:
```
The algorithm traverses the whole array and each iteration it iterates on all possible combination for the current iteration (generatiin masks).
So, time complexity: O(N*2^N)
```

### Space Complexity 
```
The result is a 2D vector.
So, space complexity: O(N * N)
```

### Output

> Test 1<br>
Input 1<br>
![image](https://user-images.githubusercontent.com/29145628/166822148-f5507a95-2a05-4b66-b118-8d610bf433d3.png)<br>
Output 1<br>
![image](https://user-images.githubusercontent.com/29145628/166822236-124ac15b-6722-4a94-a877-0bc0abe36691.png)<br>

> Test 2<br>
Input 2<br>
![image](https://user-images.githubusercontent.com/29145628/166822297-fbc277b6-1bbe-4b0d-85a7-0b961e6299f3.png)<br>
Output 2<br>
![image](https://user-images.githubusercontent.com/29145628/166822363-aa8d8e4f-b358-4e35-99b3-ea5ad492597b.png)
