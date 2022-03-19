
## The Celebrity Problem

 There are N people at the party out of which one of them is a celebrity.
 Celebrity does not any of the remaining N-1 people, but all of them know Celebrity.
 You are given a matrix of who knows who. find the celebrity.



 A celebrity is a person who is known to all but doesn't know anyone at the party.

 So, if you go at a party of N people ,find if there is a celebrity in the party or not.if
 a celebrity exists,find him/her else return -1.

```bash
  Input:-                  { {0,0,1,1},
                            {1,0,1,0},
                            {0,0,0,0},
                            {0,1,1,0} };
  Output:- Celebrity is Person Number 2
```


## Algorithm
```bash
Step 1:-Make a stack and push all the id's in the stack.
Step 2:-Run a loop while there are more than 1 component in the stack.
Step 3:-Pop top two component from the stack (address them as A and B)
Step 4:-In the event that A knows B, A can't be a celebrity and push B in stack. Else on the off chance that A doesn't know B, then, at that point, B can't be a celebrity push A in stack.
Step 5:-Appoint the leftover component in the stack as the celebrity.
Step 6:-Run a loop from 0 to n-1 and observe the count of people who knows the VIP and the number of individuals whom the celebrity knows. In the event that the count of people who realizes the celebrity is n-1 and the count of individuals whom the celebrity knows is 0 then return the id of VIP else return - 1.

```
## Complexity analysis

```bash
Time Complexity: O(n)
Space Complexity: O(1) No extra space is required.
```

## Screenshots

![Code](https://raw.githubusercontent.com/gp919934/Screenshots/main/1.png?token=GHSAT0AAAAAABSVBUS4JQSDPGCZW3EV26QGYR6NKZA)
![code](https://raw.githubusercontent.com/gp919934/Screenshots/main/2.png?token=GHSAT0AAAAAABSVBUS5OHWIKVDJK2HMOTW4YR6NLRA)

Output:-
![Code](https://raw.githubusercontent.com/gp919934/Screenshots/main/3.png?token=GHSAT0AAAAAABSVBUS55XQJFENW42YAYOTOYR6NL5Q)
