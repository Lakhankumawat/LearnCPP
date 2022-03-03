# [Longest Common Subsequence](https://www.programiz.com/dsa/longest-common-subsequence)

The **longest common subsequence (LCS)** is defined as the longest subsequence that is common to all the given sequences, provided that the elements of the subsequence are not required to occupy consecutive positions within the original sequences.

If S1 and S2 are the two given sequences then, Z is the common subsequence of S1 and S2 if Z is a subsequence of both S1 and S2. Furthermore, Z must be a strictly increasing sequence of the indices of both S1 and S2.

In a strictly increasing sequence, the indices of the elements chosen from the original sequences must be in ascending order in Z.

Eg. S1 = {B, C, D, A, A, C, D} , S2 = {A, C, D, B, A, C}
    then LCS = {C, D, A, C}
# Algorithm
X and Y be two given sequences
Initialize a table LCS of dimension X.length * Y.length
X.label = X
Y.label = Y
LCS[0][] = 0
LCS[][0] = 0
Start from LCS[1][1]
Compare X[i] and Y[j]
    If X[i] = Y[j]
        LCS[i][j] = 1 + LCS[i-1, j-1]   
        Point an arrow to LCS[i][j]
    Else
        LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1])
        Point an arrow to max(LCS[i-1][j], LCS[i][j-1]) 
        
### Let the two sequences be X and Y :  
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-X.png" width = "300px">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-Y.png" width = "300px">
The following steps are followed for finding the longest common subsequence.
1. Create a table of dimension n+1*m+1 where n and m are the lengths of X and Y respectively. The first row and the first column are filled with zeros.
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-Table-1.png" width = "300px">
2. Fill each cell of the table using the following logic.
3. If the character correspoding to the current row and current column are matching, then fill the current cell by adding one to the diagonal element. Point an arrow to the diagonal cell.
4. Else take the maximum value from the previous column and previous row element for filling the current cell. Point an arrow to the cell with maximum value. If they are equal, point to any of them.
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-Table-2.png" width = "300px">
5. **Step 2** is repeated until the table is filled.
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-Table-3.png" width = "300px">
6. The value in the last row and the last column is the length of the longest common subsequence. 
<img src="https://cdn.programiz.com/sites/tutorial2program/files/lcs-Table-4.png" width = "300px">
7. In order to find the longest common subsequence, start from the last element and follow the direction of the arrow. The elements corresponding to () symbol form the longest common subsequence. 

   ##### Thus, the longest common subsequence is CA.

# Output
![Output](https://user-images.githubusercontent.com/59263190/156550693-8a20789e-1d79-4600-afa6-34f5b812fed8.png)