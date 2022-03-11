#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p)
{
    // we see this is a question of array & string
    // a couple of observations before we start
    // anagram of abc like bac cab cab etc. i.e. they should appear together in the string s
    // So the window size becomes length of p string

    int i = 0;
    int j = 0;

    int k = p.length(); // window size
    vector<int> v;
    map<char, int> map;
    for (int i = 0; i < p.length(); i++)
    {
        map[p[i]]++;
    }
    int count = map.size(); // no of unique characters needed for the anagram when it becomes 0 means we have found a anagram

    while (j < s.length())
    {
        if (map.find(s[j]) != map.end())
        {
            map[s[j]]--;
            if (map[s[j]] == 0)
                count--;
        }

        if (j - i + 1 < k)
            j++;

        else if (j - i + 1 == k)
        {
            if (count == 0)
                v.push_back(i);

            if (map.find(s[i]) != map.end())
            {
                map[s[i]]++;
                if (map[s[i]] == 1)
                    count++;
            }

            // sliding window
            i++;
            j++;
        }
    }
    return v;
}

int main()
{
    string s = "abscdfgcabkkbac";
    string p = "ab";
    vector<int> v = findAnagrams(s, p);
    for (int i : v)
        cout << i << " ";
    return 0;
}