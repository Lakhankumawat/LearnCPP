
   ARRAY
An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).


# Reversing-of-array.cpp
reverse1->reverse the array with the help of auxilliary array in  time complexity->O(n)  and space complexity--> O(n)
reverse2->reverse the array with the help of two pointers high and low and swapping the index of high with index of low in array


example1-->
input:    1 2 3 4 5
output:   5 4 3 2 1

example2-->
input:   12 56 98 78 100 3 45 31 16
outout:  16 31 45 3 100 78 98 56 12
