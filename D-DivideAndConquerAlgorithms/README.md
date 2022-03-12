###Divide and Conquer Method

Consider the following matrices A and B:

A = |a b|,  B = |e f| and we know A*B = matrix C = |ae+bg af+bh| 
    |c d|       |g h|                              |ce+dg cf+dh|

There will be 8 recursive calls when we use Divide and Conquer Method:

a * e
b * g
a * f
b * h
c * e
d * g
c * f
d * h

#Strassen Matrix Multiplication


A = |a b|,  B = |e f| and we know A*B = matrix C = |p5+p4-p2+p6    p1+p2   |
    |c d|       |g h|                              |   p3+p4    p1+p5-p3-p7| 

Strassen came up with a solution where we don’t need 8 recursive calls but can be done in only 7 calls and some extra addition and subtraction operations.

a * (f - h)
(a + b) * h
(c + d) * e
d * (g - e)
(a + d) * (e + h)
(b - d) * (g + h)
(a - c) * (e + f)



