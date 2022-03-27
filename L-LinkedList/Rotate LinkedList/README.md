# Rotate List 
## Given the head of a linked list, rotate the list to the right by k places.

### To the right by k places, we need to do following steps.
1. To rotate a linked list by k, we can first make the linked list circular.
2. And, then moving k-1 steps forward from head node, making (k-1)th node’s next to null and make kth node as head.
3. Firstly checking if list is empty , we will return NULL.
4. Second, if list contain only node than rotation doesn't have any effect , return head.
5. Counting Number of Nodes.
6. Now consider an eg. Our List is with k=2
    1->2->3->4->5
7. so the count of nodes is 5; & value of k given is 2
8. this means we have to rotate list by 2 places.
9. so the list will become,
    5->1->2->3->4, at 1st iteration,
    4->5->1->2->3, at 2nd iteration,

10. At last, return head.

## Time Complexity
 Deleting the first node -> O(n)

## Space Complexity:  
Space Complexity: O(1) (since no extra space is used.)

## Algorithm

This problem becomes fairly easy when you connect the linkedlist to make it circular and break it as per our given k.
The following illustration will make the approach more clear.


Input: head = [1,2,3,4,5], k = 2  
Output: [4,5,1,2,3]

![image](https://user-images.githubusercontent.com/85048574/159124343-7098d02b-13b4-4384-82d2-87fb57a54330.png)





Input: head = [0,1,2], k = 4  
Output: [2,0,1]

![image](https://user-images.githubusercontent.com/85048574/159124350-ef555868-bbe5-4a4d-9084-7b130a74f541.png)
