# Stack in STL

* ### Stack is an Adaptive Container which means that it provides a different manner to implement sequential characters

* ### It is based on the LIFO (Last In First Out) Structure

* ### Recrusion too works on the principal  of Stack

 ![STACK](https://he-s3.s3.amazonaws.com/media/uploads/defd4ad.png)

# Libraray needed to be include
```cpp
#include<stack>
```

# Basic syntax


```cpp
// stack<data_type> stack_name;

stack<int> stack_one;
```

# Opearations Discussed :

| Operation | Function | Time Complexity |
| ----------|----------| ----------------|
|```push()```|Add element at the top of the container | O(1)|
|`pop()`|Delete element frm the top of the container | O(1)|
|`top()`| Fetch the top element of the container | O(1)|
|`size()`|Retuens the size of the container| O(1)|
|`empty()`| Check if container is empty or not | O(1)|
|`swap()`|Interchange the element of two container | O(1)|
|`emplace()`| Add elements at the top of the container wihout creating copy of the value passed as the parammeter | O(1)|


> All these are operations are discussed in "stack_operations.cpp" file.
