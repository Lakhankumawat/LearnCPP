# Pascal's Triangle
Pascal’s Triangle is a system of numbers arranged in rows resembling a triangle with each row consisting of the coefficients in the expansion of (a + b)n for n = 0, 1, 2, 3. The construction of the triangular array in Pascal’s triangle is related to the binomial coefficients by Pascal’s rule. 

# Algorithm
Create integer vector to generate rows
Create integer vector to generate results.
     Iterate till no. of rows
     Declare values:
        result[i][0] = result[i][i] = 1
        Iterate from j=1 till i:
        Declare values:
            result[i][j] = result[i-1][j]-1] + result[i-1][j]
Return result 

# Properties
- Time Complexity: O(n^2)
- Auxiliary Space: O(1)
- Stable: Yes

# Advantages
- To calculate the square or cubic roots, or more recently in the rule of probabilities.
- With the help of STL it becomes pretty easier as approach is clear enough.

# Disadvantages
- Solution could be optimized further.