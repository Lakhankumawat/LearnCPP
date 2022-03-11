# Merge K sorted Linked Lists
## Algorithm used: <strong>Divide and Conquer</strong>

### Approach:
1. Pair up K linked lists and merge each pair in linear time using O(n) space.
2. After the first loop, K/2 linked lists are left each of size 2\*N. After the second loop, K/4 linked lists are left each of size 4\*N and so on.
3. Repeat the procedure until we have only one linked list left.

## Time Complexity: O(n\*k\*log k)
- Outer while loop in function merge_k_ll() runs log k times and everytime it processes n*k elements.

## Space Complexity: O(n*k)
- Because recursion is used in merge() and to merge the final 2 linked lists of size (n\*k)/2, n\*k recursive calls will be made.

You can also see different approches [here](https://www.geeksforgeeks.org/merge-k-sorted-linked-lists/).