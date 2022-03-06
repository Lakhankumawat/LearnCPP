# Queue in STL

+ ### Queue is an adaptive container that helps to implement the container in a different manner
+ ### It works on the FIFO (First In First Out) structure.
+ ### New elements are inserted at he end of the container and elemnts are deleted from the front i.e the first entered element.

![QUEUE](https://iq.opengenus.org/content/images/2019/05/pq.png)

# Library needed to be include
```cpp
#include<queue>
```

# Basic Syntax
```cpp
// queue<data_type> queue_name;

queue<int> queue_one;
```

# Operations Discussed :

| Operation | Function | Time Complexity |
| ----------|----------| ----------------|
|```push()```|Add element at the end of the container | O(1)|
|`pop()`|Delete element from the top of the container i.e the first element | O(1)|
|`front()`| Fetch the top element of the container | O(1)|
|`back()`|Fetch the last element in the container| O(1)|
|`size()`| Returns the size of the container | O(1)|
|`emplace()`|Add new element at the end of the container without making the copy of value passed as the parameter | O(1)|



> All the operations are discussed in "queue_operations.cpp"