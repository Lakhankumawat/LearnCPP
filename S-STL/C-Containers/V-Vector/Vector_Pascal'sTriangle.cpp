// Given a non-negative number [numRows], generate the first numsRows of Pascal's triangle.

// Input: 5
// Output:
// [
//  [1],
//  [1, 1],
//  [1, 2, 1],
//  [1, 3, 3, 1],
//  [1, 4, 6, 4, 1]
// ]

#include <iostream>
#include <vector>
using namespace std;

class PascalTriangle
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result(numRows);

        for (int i = 0; i < numRows; i++)
        {
            result[i].resize(i + 1);
            result[i][0] = result[i][i] = 1;

            for (int j = 1; j < i; j++)
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }

        return result;
    }
};
