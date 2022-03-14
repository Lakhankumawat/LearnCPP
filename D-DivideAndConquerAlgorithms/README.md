<!-- Table of content -->
# Table of content
- [Divide and conquer Algorithms](#divide-and-conquer)
  - [Pow(x^n)](#power)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Divide and conquer

- divide and conquer is an algorithm design paradigm. A divide-and-conquer algorithm recursively breaks down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly.
- The solutions to the sub-problems are then combined to give a solution to the original problem.

## power

- In the traditional method, each step partial solution is multiplied by x and hence problem size reduces from xn to xn-1, so it needs n steps and hence its running time is O(n).
-  While in the case of divide and conquer strategy, during each step, a partial solution is multiplied by itself and hence problem size reduces from xn to xn/2, so it needs log2n steps.
-  So running time of divide and conquer approach is O(log2 n).
<!-- image to help better explain the concept -->
![Pow(x^n)](https://res.cloudinary.com/codecrucks/images/w_600,h_101,c_scale/f_webp,q_auto/v1633016342/exponential-problem-using-divide-and-conquer1/exponential-problem-using-divide-and-conquer1-600x101.png?_i=AA)



### Algorithm

```

Algorithm EXPONENT_DC(x, n)
// we want to find n power of x

if n == 0 then
  return 1
else
  m ← EXPONENT_DC(x, n/2)
  if n%2 == 0 then
    return m*m      // if n is even
  else
    return m*m*x    // if n is odd
  end
end

```

### Properties

- Time Complexity : O(logn)
- Auxillary Space : O(1)

### Advantages

- Fast exponentiation algorithm

### Disadvantage

- a bit complicated approach.
