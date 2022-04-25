#include <iostream>
using namespace std;

// Function to implement the KMP algorithm
void KMP(string text, string pattern)
{
    int m = text.length();
    int n = pattern.length();

    // if pattern is an empty string
    if (n == 0)
    {
        cout << "The pattern occurs with shift 0";
        return;
    }

    // if text's length is less than that of pattern's
    if (m < n)
    {
        cout << "Pattern not found";
        return;
    }

    // next[i] stores the index of the next best partial match
    int next[n + 1];

    for (int i = 0; i < n + 1; i++) {
        next[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];

        while (j > 0 && pattern[j] != pattern[i]) {
            j = next[j];
        }

        if (j > 0 || pattern[j] == pattern[i]) {
            next[i + 1] = j + 1;
        }
    }

    for (int i = 0, j = 0; i < m; i++)
    {
        if (text[i] == pattern[j])
        {
            if (++j == n) {
                cout << "The pattern occurs with shift " << i - j + 1 << endl;
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--;    // since `i` will be incremented in the next iteration
        }
    }
}

// Program to implement the KMP algorithm in C++
int main()
{
    string text ;
    string pattern;
    cout<<"Enter the text ";
    cin>>text;
    cout<<"Enter the pattern ";
    cin>>pattern;

    KMP(text, pattern);

    return 0;
}
