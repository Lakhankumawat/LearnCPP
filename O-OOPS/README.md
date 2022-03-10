#Operator Overloading:
<p>All Mathematical Operators (Arithmetic, relational, logical, etc...) are implemented by default to operate on primitive data types, such as: int & float.</p>
<p>By default, they will not work on a class than we implement, therefore, we have to implement them ourselves for this class. This was done for the <b>string</b> class to allow the usage of the addition operator to concatenate strings.</p>

###The most common types of Operators to be Oveloaded:
1) Binary Operators</em> (+, -, *, /)
2) Unary Operators (++, --, !)
3) Relational Operators (>, <, ==, !=)
4) Insertion and Extraction Operators (<<, >>)
5) Other Operators ([ ], typecasts)
<hr>

###1. Binary Operators:
<p>Binary Operators, such as addition, subtraction, multiplication, and division
<br>Perform an arithmetic operation on two Objects</p>

#####Using the simple example of adding two numbers:
``int x = 2;``<br>
``int y = 3;``<br>
``int z = x + y;``
<br>
#####We can conclude the properties of Binary Operators:
* A binary Operator requires <b>two objects</b>
* A binary Operator returns the same type as its parameters
<hr>

###2. Unary Operators
<p>Unary Operators are: prefix and postfix <b>increment</b> and <b>decrement</b>, as well as the <b>NOT</b> operator</p>

####Distinguishing prefix and postfix operators:
<p>The Convention to distinguish between them is to pass a dummy parameter to the postfix operator, as follows:</p>

#####Prefix:
``class_name operator++()``
#####Postfix:
``class_name operator++(int)``
<hr>

###3. Relational Operators
<p>Relational Operators such as: <, >, ==, != are used to compare multiple attributes of an object at once.
<br>A relational Operator returns a <b>boolean</b> value after comparing objects.</p>

#####Sample header:
``bool operator== (const NumberClass& parameter)``
<hr>

###4. Insertion and Extraction Operators
<p>Insertion and Extraction Operators are used to input / output multiple attributes of the class at once, whether into the console or a file.</p>

#####Note:
* The <b>calling object</b> for these operators is not an instance of the class, it is either <b>cin</b>, or a <b>file object</b>.
Both of them belong to a <b>built-in class</b> that cannot be altered. So these operators are declared as a <b>friend function</b> rather than a <b>member function</b>.
####Header Syntax:
#####Insertion Operator
``friend ostream& operator<<(ostream& inStream, const NumberClass& object)``
<br>
#####Extraction Operator
``friend istream& operator>>(istream& inStream, NumberClass& object)``
#####Note:
<p>These Operators can also be overloaded to read from / write to a <b>file</b>
by using <b>ofstream</b> and <b>ifstream</b> objects instead of <b>ostream</b> and <b>istream</b></p>
<hr>

###5. Other Operators ([ ] and Typecasts)
####A) Overloading Typecasts
<p>Overloading typecasts allow the object to be treated as a primitive datatype in operations without needing to overload operators, such as:</p>

<br>``NumberClass x(3);``<br>
``int number = x;``<br><br>
`if(object < 2) cout<<"Object compared to number normally";`
####Note: 
<p>Overloading typecasts does not require a return type as it is implicitly declared in the type of the operator itself</p>

####A) Overloading Subscript Operator [ ]
The subscript operator can be overloaded to access elements of an array inside the object using the object name instead, such as:<br>
``Class object[2]``<br>
``Class object.arr[2]``

####Note:
* This Operator returns a reference to the type of elements in the array
* Takes the index as a parameter
####Header:
`int& operator[](int index)`
<hr>