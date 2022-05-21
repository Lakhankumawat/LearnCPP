<!-- Table of content -->
# Table of content
- [Problem Statement](#problem-statement)
 - [Iterative Solution for Josephus Problem](#iterative)
   -  [Approach](#it-approach)
   -  [Code](#it-code)
   -  [Output Screenshot](#it-op)
   -  [Time Complexity](#it-time)
 - [Recursive Solution for Josephus Problem](#recursive)
   -  [Approach](#rec-approach)
   -  [Code](#rec-code)
   -  [Output Screenshot](#rec-op)
   -  [Time Complexity](#rec-time)
 - [Special Case (k=2)](#sp)
   -  [Approach](#sp-approach)
   -  [Code](#sp-code)
   -  [Output Screenshot](#sp-op)
   -  [Time Complexity](#sp-time)


# Josephus Problem

## Josephus Problem Statement :
We are given the natural numbers n and k. All natural numbers from 1 to n are written in a circle. First, count the k-th number starting from the first one and delete it. Then k numbers are counted starting from the next one and the k-th one is removed again, and so on. The process stops when one number remains. It is required to find the last number.


## Recursive Solution for Josephus Problem
The given solution is better than the recursive solution of Josephus Solution which is not suitable for large inputs as it gives stack overflow.

### Approach - 
-As 1 person added in ‘i’ no. of persons then winning index shift by k from previous winning index .
-But as winning index should not exceed from total index available so after last index , it again counts from 0th index so we use % i .

![image](https://user-images.githubusercontent.com/72555452/169657013-11b92856-80c0-4dd9-9450-9f2f5032f313.png)

- When i increase by 1 & k is same, we can observe same pattern -

**Winning index for i =  (Winning index (i - 1)  +  k ) % i**

From this, I created the iterative  solution,

for (i = 2; i <= n; i++)
        sum = (sum + k) % i;
return sum + 1; 

- sum represents the winning index.    

### Code
- Look into recursive.cpp file

### Output Screenshot
![image](https://user-images.githubusercontent.com/72555452/169657696-3e322371-7abf-4254-953f-736fd41f403f.png)

### Time complexity  -  O(n)                      
- As loop executed for n times.


## Iterative Solution for Josephus Problem
### Approach
n  =  No. of persons
k  =  kill kth  person 

![image](https://user-images.githubusercontent.com/72555452/169656605-baf73826-d54b-491a-8141-9bc74fd730b8.png)

- Winning position is based on n & k. So let’s assume W (n, k) is the winner.
- For n = 1, 
          W ( 1 , k ) = 0   (index)
- W(n, k) is helped by  W(n - 1, k) to find winning position if we changed the sword position in ‘n - 1’  state. Sword position changes by k so we are adding k.
           W (n , k)  =>  (W (n - 1 , k) + k ) % n   
- But as the persons are in circle so for the sword position, after last index, 0th index should be counted so we are using % n. 

- Lets understand by ex.

![image](https://user-images.githubusercontent.com/72555452/169656730-6fa66400-81f4-4720-a53f-1acf1d8c73bd.png)

### Code
- Look into iterative.cpp file

### Output Screenshot
![image](https://user-images.githubusercontent.com/72555452/169657649-40e834e6-2bed-48a3-9816-61ae52ef4cee.png)

### Time complexity  -  O(n)
-As recursion happens n times.


## Special Case (k=2)
### Approach
Calculation of winning position for  ‘n’ persons.
![image](https://user-images.githubusercontent.com/72555452/169657198-9412fea9-1c8b-4272-b456-4bcff7d253e0.png)

We can observe that ,
- For n = 2a  ,  W(n) = 1.
![image](https://user-images.githubusercontent.com/72555452/169657291-ed5f78d6-02e5-4311-a96b-9cf09523503e.png)

After Cycle 1, the condition is the same as that of 4 soldiers. Hence, For **n = 2a , W(n) will always be the one who starts the killing first** (in this case person1).

Any integer ‘n’ can be written as  2a + b. (where 2a is biggest power possible for n )
- If **n = 2a + b** , then **W( n ) = 2b + 1**.     

![image](https://user-images.githubusercontent.com/72555452/169657313-a7cd9757-e5d5-4f3f-aece-b890dd78c7ae.png)

Suppose n = 12
12 = 23 + 4
Here a = 3, b = 4                    
After killing 4 persons, the remaining persons are nothing but 2a . 
                                                                                
For 2a person , who starts the killing first, is the winner.
So 9 is the winner.	
W( n ) = 2b + 1
W( n ) = 2*4 + 1 = 9       
             
![image](https://user-images.githubusercontent.com/72555452/169657485-b407178f-29a1-443e-b88b-d61e09eb92a3.png)    

### Code
- Look into josephus.cpp file

### Output Screenshot
![image](https://user-images.githubusercontent.com/72555452/169657560-3600c8db-e74e-41f3-ad0f-1416be2544b3.png)

### Time complexity  -  O(log n)


