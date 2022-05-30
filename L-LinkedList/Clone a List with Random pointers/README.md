# Clone a Linked List with random pointers:
## Explaination:
    You are given a Double Link List with one pointer of each node pointing to the next node just like in a single link list. The second pointer however CAN point to any node in the list and not just the previous node. Now write a program in O(n) time to duplicate this list. That is, write a program which will create a copy of this list. 
    
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/2009/08/ArbitLinked-List12.gif)


## Approach:
1. Create a cloned list of original list
2. Create a mapping of original list with cloned list
3. Assign random pointer to each node of cloned list using mapping 

![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/2009/08/ArbitLinked-List2.gif)


## Time Complexity: O(n)
- Where N is the number of nodes in a list.

## Space Complexity: O(n)
- Where N is number of nodes in a list in a unordered_list.

## Input Example:
- list = 1 -> 2-> 3-> 4-> 5 -> NULL
- where 1->rand = 5
        2->rand = 4
        3->rand = 2
        4->rand = 1
        5->rand = 3

## Output Example:
- cloned list = 1 -> 2-> 3-> 4-> 5 -> NULL
- where 1->rand = 5
        2->rand = 4
        3->rand = 2
        4->rand = 1
        5->rand = 3







