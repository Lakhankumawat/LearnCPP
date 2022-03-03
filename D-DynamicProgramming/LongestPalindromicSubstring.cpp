/*
 Q. What Does This MANACHER's Algorithm Does ?

Ans. Manacher’s Algorithm helps us find the longest palindromic substring
in the given string in better complexity then the Brute Force Solution also the Dynamic Programming Solution
in Linear Time and Linear Space.
Note : It will reduce the number of expands for the each index it saves the length of previously occured palindrome length

=> Problem Statement : Given a string "s", return the length of longest palindromic substring in "s".

Reason: $ for recognizing the starting index, @ for the ending index and # for spaces between characters so that
Why i am adding $,@ and # to the main string ?
we gonna also find even length subtrings
*/

// SAMPLE TEST CASES :
/*
If s = abababa then after changes it becomes : $#a#b#a#b#a#b#a#@
If s = abacabacabb then after changes it becomes : $#a#b#a#c#a#b#a#c#a#b#b#@
 */

// CODE :

#include <bits/stdc++.h>
using namespace std;

// helper function
int manacherAlgo(string s, int left, int right, int center, vector<int> &maxLengthForEachIndex)
{
    int n = s.length(); // length of the string
    // iterate over the whole string
    int maxLength = -1;
    for (int idx = 1; idx < n - 1; idx++)
    { 
        // here center is the main center of the ith palindromic substring 
        int mirrorOfCurrIndex = 2 * center - 1; /* by obervation or you can take a dry run then you find that the mirror will be this that's we add # so that
        we can also find the mirrors for even indexes without any problem. */
        // check whether the current index is within the right bound or not means
        if (idx < right)
        { 
            maxLengthForEachIndex[idx] = min(right - idx, maxLengthForEachIndex[mirrorOfCurrIndex]);
        }
        // now we expand along the center to the left or right and also update the palindromic (largest possible) for that index
        while (s[idx + (1 + maxLengthForEachIndex[idx])] == s[idx - (1 + maxLengthForEachIndex[idx])])
        { // it means the left character to that index is equals to the right one hence increase the length at the index
            maxLengthForEachIndex[idx]++;
        }
        /* now this is the point where MANACHER's helps to reduce the expand steps here if right index is less than the
        sum of length of substring at that index + index then we can automatically jumps to these number of steps because we already
        know that here we found the substring of (maxLengthForEachIndex[idx) length previously so we can jump our right to this. */
        if (idx + maxLengthForEachIndex[idx] > right)
        {
            center = idx;
            right = idx + maxLengthForEachIndex[idx];
            maxLength = max(maxLength, maxLengthForEachIndex[idx]);
        }
    }
    return maxLength;
}
// main function

int main()
{
    string s;
    cout<<"Enter The String - ";
    cin >> s;
    int left = 1, right = 1, center = 1;
    // now before passing the string make sure you can add '#', '$' and '@'
    string copy = "";
    for (char &i : s)
    {
        copy += '#';
        copy += i;
    }
    copy += ("#@");
    copy = '$' + copy;                       // adding the '$' at front (for starting point)
    int n = copy.length();                      // length of the string(main)
    vector<int> maxLengthForEachIndex(n, 0); // initialised with 0
    int result = manacherAlgo(copy, left, right, center, maxLengthForEachIndex);
    cout <<"\n"<< s << " has the Largest Palindromic Substring of Length - " << result << "\n";
}

// Contributed By - github.com/singhkunal01