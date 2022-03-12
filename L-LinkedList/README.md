#  Merge two sorted linked lists
## function that takes two lists, each of which is sorted in increasing order, and merges the two together into one list which is in increasing order. SortedMerge() should return the new list. The new list should be made by splicing together the nodes of the first two lists.

### To Merge two sorted linked lists , we need to do following steps.
1.First we define a node by either using struct or class.
2.Create a function to create new nodes.
3.Create a function which takes two sorted linked lists as input and return head of merged linkedlist.
4.Create a function to display the linked list and write main function.

## Time Complexity
O(m+n) where m and n are the lengths of the two lists to be merged.

## Space Complexity:  
Space Complexity: O(1) (since no extra space is used.)

## Algorithm

1. Traverse both lists
   1.1. If list1->data < list2->data
      1.1.1 Add list1->data to new list and increment list1 pointer
   1.2 If list2->data < list1->data
      1.2.1 Add list2->data to new list and increment list2 pointer
2. Repeat procedure until both lists are exhausted
3. Return resultant list



![Merge-Two-Sorted-LinkedLists1](https://user-images.githubusercontent.com/89499345/158004765-40dca639-6508-44d5-9727-1986e8123902.jpg)

