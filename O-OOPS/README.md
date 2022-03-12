# [Operator Overloading:](https://www.geeksforgeeks.org/operator-overloading-c/)<br>

<img src="https://i1.wp.com/www.topjavatutorial.com/wp-content/uploads/2016/02/operator-overloading.png?w=597&ssl=1">
<p>All Mathematical Operators (Arithmetic, relational, logical, etc...) are implemented by default to operate on primitive data types, such as: int & float.</p>
<p>By default, they will not work on a class than we implement, therefore, we have to implement them ourselves for this class. This was done for the <b>string</b> class to allow the usage of the addition operator to concatenate strings.</p>

# Table of Contents
- [Binary Operators](#binary-operators)
    - [Properties](#properties)
    - [Example](#example)
    - [Output](#output)

### The most common types of Operators to be Oveloaded:
1) Binary Operators</em> (+, -, *, /)
2) Unary Operators (++, --, !)
3) Relational Operators (>, <, ==, !=)
4) Insertion and Extraction Operators (<<, >>)
5) Other Operators ([ ], typecasts)
<hr>

# Binary Operators

<p>Binary Operators, such as addition, subtraction, multiplication, and division
<br>Perform an arithmetic operation on two Objects</p>

##### Properties

* A binary Operator requires <b>two objects</b>
* A binary Operator returns the same type as its parameters

##### Example
``int x = 2;``<br>
``int y = 3;``<br>
``int z = x + y;``

##### Output

![output-binary2](https://user-images.githubusercontent.com/78499278/158010603-12fa457f-8918-411b-9fc3-4cd7b70db4c9.jpg)
<br>
<hr>