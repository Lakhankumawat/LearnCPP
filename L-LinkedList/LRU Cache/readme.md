# LRU(Least Recently Used) Cache ->

 A **LRU Cache( Least Recently Used)** is used to organize items according to their frequency of uses.
It helps to identify Quickly Which item is used the least number of time in the Cache.



 ## Functions in LRU :


  1. **get(Key)**<br>
    If the Key is There in cache , return corresponding value , either return -1 .

  2. **put(key,value)** <br>
    If the chache is not overflown insert the {key,value} pairs , 
    either remove the LRU element pair from Cache and insert the new key-value pair. 


## Implementation :
 1. **HashMap** : Hash is used to refer as key -address of related node as their value.
 2. **Queue** : It is implemented as a Doubly Linked List. Queue Size== Cache Size .<br>
 **The Least Recently Used element is placed towards the rear end and most used is towards to fron end .**



## Example::
 1. **Let a Cache , size=2**

![image](https://user-images.githubusercontent.com/77873383/160329808-f0b4949a-3da0-4082-b724-12acb6811465.png)
 2. **put(1,1)**

![image](https://user-images.githubusercontent.com/77873383/160330070-121292f5-6e02-4076-bd09-b426a742823c.png)

 3. **put(2,2)**

![image](https://user-images.githubusercontent.com/77873383/160330330-4a55a134-9496-4a25-894a-b37eb499caca.png)

 4. **get(1)** == 1 

![image](https://user-images.githubusercontent.com/77873383/160330493-b726a84e-908d-48c5-b415-2c8673ce4a0f.png)


 5 **put(3,3)**

![image](https://user-images.githubusercontent.com/77873383/160330972-d82a0150-10c2-43f8-97f3-a7c26de02b0e.png)

![image](https://user-images.githubusercontent.com/77873383/160331110-9e3da43f-e32f-41e4-9583-0be8ec248e25.png)


 6.  **get(1)** == -1  **(Key=1 not present in cache)

 7.  **put(4,4)**


![image](https://user-images.githubusercontent.com/77873383/160331584-c7f57b54-7232-49d1-9597-0b270c0483e3.png)



 ### Costs : 
- Space Complexity -> O(n)
- Access Time -> O(1)