# Swap 2 Numbers Using Bit Manipulation

- ####  **XOR Operation** is used to swap 2 numbers.

### How XOR(^) Operator Works ?
 1. A ^ A = 0
 2. A ^ 0 = 0


### Implementation :
Let A , B two numbers are given
Then 2 swap these 2 numbers using 2 following Operations ->

- A= A^B
- B= A^B = (A^B)^B=A^0=A [From A=A^B]
- A=A^B=(A^B)^A=B [From B=A]

### Example :
   Let , A=5(101) , B=7(111)
   
   - A=A^B= 5^7= (101)^(111)=010=2
   - B= A^B = 2^7= (010)^(111)=101=5
   - A= A^B=2^5=(010)^(101)=7

   **So, Now A=7 , B=5** 

