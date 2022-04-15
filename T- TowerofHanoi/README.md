# Table of Contents
* [Explanation](#explanation)
* [Rules](#obeying_the_rules)
* [Algorithm](#algorithm)
* [Recursive_Approach](#A-recursive_approach_for_solving_Tower_of_Hanoi) 
* [Complexity-Abalysis](#complexity-analysis-of-tower-of-hanoi)
* [Time Complexity](#time-complexity-of-tower-of-hanoi) 


## Explanation

<h1> Tower of Hanoi </h1>

Tower of Hanoi is a mathematical puzzle, invented by the French mathematician Edouard Lucas in 1883, where we have three rods and n disks. This puzzle is used to move the entire stack to another rod and it is just a fun problem.\


There are three rods, Source(A), Helper(B) and Destination(C). Rod A is a source rod containing a set of disks stacked to resemble a tower, with the largest disk at the bottom and the smallest at top. Rod B, which is a helper rod helps to pass the disks from source to destination. Rod C is the destination where finally the disks will be visible or stacked like rod A initially.

## Obeying the Rules

1.     Only one disk can be transferred at a time.

2.     Each move consists of taking the upper disk from one of the rod and placing it on the top of another peg i.e. a    
       disk can only be moved if it is the uppermost disk of the rod.

3.     Never a larger disk is placed on a smaller disk during the transfer.

## Algorithm

For writing  an algorithm for Tower of Hanoi we need to write an algo for a smaller number of disks like 1 or 2.  We mark three towers with name, source, destination and aux/helper (only to help moving the disks). If we have only one disk, then it can easily be moved from source to destination peg. 
If we have 2 disks:

=> First, we move the smaller(top) from source to auxillary rod.
=> Then , we move the larger disk from source to destination rod.
=> And finally, we move the smaller disk from auxiliary to destination.


Now, we make an general algorithm if we have n number of disks then what should we do:

Step 1: Move n-1 disks from source to auxiliary.
Step 2: Move nth disk from source to destination.
Step 3: Move n-1 disks from auxiliary to destination.

## A recursive approach for solving Tower of Hanoi

Start
Procedure HanoiTower(disk, src, dest, helper)
	if(disk == 0) , Then
return
else
HanoiTower(disk-1,src,helper,dest)   	//step 1
Move disk from src to dest            	   	//step2
HanoiTower(disk-1,helper,dest,src) 	//step 3

END

STOP

## Complexity Analysis of Tower of Hanoi

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 
1) Only one disk can be moved at a time. 
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack. 
3) No disk may be placed on top of a smaller disk. 

Pseudo Code 
 

TOH(n, x, y, z)
{
   if (n >= 1)
   {
      // put (n-1) disk to z by using y
      TOH((n-1), x, z, y)
   
       // move larger disk to right place
       move:x-->y
     
      // put (n-1) disk to right place 
      TOH((n-1), z, y, x)
   }
}
## Analysis of Recursion 

Recursive Equation : T(n) = 2T(n-1) + 1   ——-equation-1 

Solving it by Backsubstitution : 
T(n-1) = 2T(n-2) + 1   ———–equation-2 
T(n-2) = 2T(n-3) + 1   ———–equation-3 

Put the value of T(n-2) in the equation–2 with help of equation-3 
T(n-1)= 2( 2T(n-3) + 1 ) + 1   ——equation-4 

Put the value of T(n-1) in equation-1 with help of equation-4 
T(n)= 2( 2( 2T(n-3) + 1 ) + 1 ) + 1   
T(n) = 2^3 T(n-3) + 2^2 + 2^1 + 1   

After Generalization : 
T(n)= 2^k T(n-k) + 2^{(k-1)} + 2^{(k-2)} + ............ +2^2 + 2^1 + 1   

Base condition T(1) =1 
n – k = 1 
k = n-1
put, k = n-1
T(n) =2^{(n-1)}T(1) + + 2^{(n-2)} + ............ +2^2 +2^1 + 1   


## Time Complexity of Tower of Hanoi

It is a GP series, and the sum is 2^n - 1   

T(n)= O( 2^n - 1)   , or you can say O(2^n)   which is exponential

for 5 disks i.e. n=5 It will take 2^5-1=31 moves.





