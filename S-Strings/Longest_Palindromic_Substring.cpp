// program to find longest palindromic substring in given string 

// Expected leftme Complexity: O(|S|2).
// Expected Auxiliary Space: O(1).

// there are two possiblity 
// 1) substring may be even length
// 2) substring may be odd length

// we will check for both possiblity

// you can check for more info
// https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/

#include<iostream>
#include<string>

using namespace std;


int main()
{

    string s;
    cin >> s;

    int n = s.size();

    int even_i=0, even_j=1,odd_i=0,odd_j=2;


    string ans="";
    ans += s[0];
    while(even_j<n)  // For even lenght substring
    {
        int left = even_i, right = even_j;
        bool b = 0;
        while(left>=0&&right<n&&s[left]==s[right])
        {
            b = 1;
            left--;
            right++;
        }
        if(b)
        {
            left++;
            right--;
            if(ans.size()<right-left+1)
                ans = s.substr(left, right - left + 1);
        }
        even_i++;
        even_j++;
    }

    while(odd_j<n) // for odd length substring
    {
        int left = odd_i, right = odd_j;
        bool b = 0;
        while(left>=0&&right<n&&s[left]==s[right])
        {
            b = 1;
            left--;
            right++;
        }
        if(b)
        {
            left++;
            right--;
            if(ans.size()<right-left+1)
                ans = s.substr(left, right - left + 1);
        }
        odd_i++;
        odd_j++;
    }


    cout << ans << endl;

    return 0;
}
