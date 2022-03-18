#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
 * Problem statement:
 * Given two strings str1 and str2, print the shortest string that has both str1 and str2 as subsequences.
 * If there are multiple valid strings, print any of them.
 * A string s is a subsequence of string t if deleting some number of characters from t (possibly 0) results in the string s.
 *
 */
string LCM(vector<vector<int>> &mem, string s1, string s2) {
    // Finding length of the longest common subsequence
    /*
     * 1- The first row and the first column are filled with zeros.
     * 2- Fill each cell with the table using the following logic.
     * 3-If the character corresponding to the current row and current column are matching,
     *   then fill the current cell by adding one to the diagonal element.
     *   Point an arrow to the diagonal cell.
     * 4- Else take the maximum value from the previous column and previous row element for filling the current cell.
     * 5- Step 2 is repeated until the table is filled.
     * 6- The value in the last row and the last column is the length of the longest common subsequence.
     */
    for (int n = 0; n < s1.size(); n++) {
        for (int m = 0; m < s2.size(); m++) {
            int insertion = mem[n + 1][m];
            int deletion = mem[n][m + 1];
            int match = mem[n][m] + 1;
            if (s1[n] == s2[m])
                mem[n + 1][m + 1] = match;
            else
                mem[n + 1][m + 1] = max(insertion, deletion);
        }
    }
    /*
     * In order to find the longest common subsequence, start from the last character of the two strings
     * if the characters match then add it to the string and decrement the two pointers
     * else compare the element in the preceding row and the preceding column
     *      if the element at the preceding row is greater then decrement the first pointer
     *      else decrement the other pointer
     * After that you need to reverse the string
     * */
    int i = s1.size(), j = s2.size();
    string LCMSTR;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            LCMSTR += s1[i - 1];
            i--;
            j--;
        } else if (mem[i - 1][j] > mem[i][j - 1])
            i--;
        else
            j--;
    }
    std::reverse(LCMSTR.begin(), LCMSTR.end());
    return LCMSTR;
}

string Shortest_supersubsequence(vector<vector<int>> &mem, string s1, string s2) {
    // In order to find the shortest super subsequence we need to
    /*
     * 1- Find the longest common subsequence (lcs)
     * 2- Include its characters only once
     * 3- Add the other characters of the two strings
     * */

    // First Find The Longest Common Subsequence (lcs) of two given strings
    string LCM_string = LCM(mem, s1, s2);

    // Then Include LCM characters only once and add the other characters of the two strings
    string SSS_string;
    int i = 0, j = 0;
    for (auto c: LCM_string) {
        // Add the other characters of the two strings
        while (i < s1.size() && s1[i] != c) {
            SSS_string += s1[i];
            i++;
        }
        while (j < s2.size() && s2[j] != c) {
            SSS_string += s2[j];
            j++;
        }
        // Include LCM characters only once
        SSS_string += c;
        i++;
        j++;
    }
    SSS_string += s1.substr(i) + s2.substr(j);
    return SSS_string;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    vector<vector<int>> mem(str1.size() + 1, vector<int>(str2.size() + 1));
    string shortest_super_subsequence = Shortest_supersubsequence(mem, str1, str2);
    cout << shortest_super_subsequence;
    return 0;
}