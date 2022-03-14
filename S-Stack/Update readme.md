# STACK :
1. A linear-data structure that follows LIFO (Last In First Out) principle.
2. It can be implemented by using Array or Linked List.


## Static implementation of Stack :
1. A stack data structure can be implemented using a one-dimensional array. But stack implemented using array stores only a fixed number of data values. 
2. Just define a one dimensional array of specific size and insert or delete the values into that array by using LIFO principle with the help of a variable called 'top'. Initially, the top is set to -1. Whenever we want to insert a value into the stack, increment the top value by one and then insert. Whenever we want to delete a value from the stack, then delete the top value and decrement the top value by one.
3. In PR , I've use menu driven program to add , remove and display the values.
4. Push - This adds a data value to the top of the stack.
    Pop - This removes the data value on top of the stack.
    Display - This will show the values in stack or the stack is full/empty.


### Algorithm:
1. PUSH:
- First it will check whether the stack is full or not , by comparing top with (MAX-1). If the stack is 
full then print "Stack is full." and then we can't push more values in that stack.
- If the stack is not full then we will increment top by 1 and set stk[top] = num which will push the value in stack.

2. POP:
- First it will check whether if the stack is empty or not by comparing top with -1.
If top is equal to -1 then stack is empty and it'll print "Stack is empty
- If top is not equal -1 then it'll store the value pointed by top in a variable num = stk[top] 
and decrement top by 1 then num will popped from the stack.
        
#### Properties:
Time Complexity: O(N)\
Space Complexity: O(N)

##### Advantage:
It is more time efficient than Dynamic Implementation.

###### Disadvantage:
In this static implementation , lots of effort are there to add or remove the value . 

###### Output:
![Image](https://user-images.githubusercontent.com/81229872/158112218-33221b53-4de7-4df0-b7e1-5f884a42042c.PNG)
![Image](https://user-images.githubusercontent.com/81229872/158112232-83e93408-1491-4b4d-81e0-7549898d4bbd.PNG)
![Image](https://user-images.githubusercontent.com/81229872/158112256-f5162b9b-5b1b-48da-804f-5c9edc89fcc3.PNG)
![Image](https://user-images.githubusercontent.com/81229872/158112268-9bd05615-e43e-4b43-bb9b-515e22b3fd46.PNG)

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20210716162942/stack-660x345.png)