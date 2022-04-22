# Merge K sorted Linked Lists
## Algorithm used: [Divide and Conquer](https://www.geeksforgeeks.org/divide-and-conquer-algorithm-introduction/)

## Approach:
1. Pair up K linked lists and merge each pair in linear time using O(n) space.
2. After the first loop, K/2 linked lists are left each of size 2\*N. After the second loop, K/4 linked lists are left each of size 4\*N and so on.
3. Repeat the procedure until we have only one linked list left.

## PseudoCode:
1) Divide Step:-
    - Start making pairs of linked list (i, k-i) for example:- (0, k-1), (1, k-2), and so on till k-i>i.
    - Send the pairs to the merge function.
    - If k-i<=i, loop again but only till k/2.
2) Merge Step:-
    - Create pointer to return the combined list.
    - Add the smaller value from either list.
    - Increment pointer from which value has been taken.
    - Return merged and sorted linked list from two lists.

![List1](https://user-images.githubusercontent.com/67220225/158016476-3fad6f1b-6038-4118-a8da-80c27e2fedfd.png)


## Time Complexity: O(n\*k\*log k)
- Outer while loop in function merge_k_ll() runs log k times and everytime it processes n*k elements.

## Space Complexity: O(n*k)
- Because recursion is used in merge() and to merge the final 2 linked lists of size (n\*k)/2, n\*k recursive calls will be made.

You can also see different approches [here](https://www.geeksforgeeks.org/merge-k-sorted-linked-lists/).