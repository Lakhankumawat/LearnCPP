# Queue in STL

+ ### Queue is an adaptive container that helps to implement the container in a different manner
+ ### It works on the FIFO (First In First Out) structure.
+ ### New elements are inserted at he end of the container and elemnts are deleted from the front i.e the first entered element.

# Library needed to be include
```cpp
#include<queue>
```

# Basic Syntax
```cpp
// queue<data_type> queue_name;

queue<int> queue_one;
```

# Operations :

+ ### ```queue_one.push()``` 
+ ### ```queue_one.pop()```
+ ### ```queue_one.front()```
+ ### ```queue_one.back()```
+ ### ```queue_one.size()```
+ ### ```queue_one.emplace()```

> All the operations are discussed in "queue_operations.cpp"