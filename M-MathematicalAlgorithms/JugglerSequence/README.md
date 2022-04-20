#  Table of content:
  - [Juggler Sequence](#juggler-sequence)
  - [Examples](#examples)
  - [Algorithm](#algorithm)
  - [Properties](#properties)

# Juggler Sequence :
Juggler Sequence is a series of integer number in which the first term starts with a positive integer number a and the remaining terms are generated from the immediate previous term using the below recurrence relation until reach to 1: 

 ![quicklatex com-0d2326af0f44e3f68f466125175e15e2_l3](https://user-images.githubusercontent.com/31670657/161595243-073b5b74-a6d2-4370-b59c-af5cd96cd77f.svg)
![Capture](https://user-images.githubusercontent.com/31670657/163687424-2774c0f7-5387-4730-9ce7-e271f24a43cd.PNG)


### Examples
 ```
  Input: N = 9 
  Output: 9, 27, 140, 11, 36, 6, 2, 1 
  We start with 9 and use above formula to get next terms.

 ```

### Algorithm
```
// This function prints the juggler Sequence using loop.
// a is first term in Juggler Sequence.
begin printJugglerWithLoop(long long a)
{
     print the first term.

     while terms is not equel 1.
          if previous term is even or odd
             calculate next term using even formula
          else
             calculate next term using odd formula
          end if
     end while   

        print the next term
} end printJugglerWithLoop

// This function prints the juggler Sequence using recursion.
// a is the first term
begin printJugglerWithRec(long long a)
{
    print the term
    This base condition, when a == 1 then end the recursion.
    if a == 1 
       return;
    else if a % 2 == 0
     recall function again printJugglerWithRec(floor(sqrt(a)));
    else
    recall function printJugglerWithRec(floor(sqrt(a) * sqrt(a) * sqrt(a)));
    end if
 } end  printJugglerWithRec

```

### Properties
   - Time Complexity : O(n)
   - Auxillary Space : O(1)
### Advantage
   - Simple Implemention.
   - Space Complexity is constant O(1)
### Disadvantage
   - Time Complexity is linear O(n)
