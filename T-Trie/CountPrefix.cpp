#include <bits/stdc++.h>

using namespace std;

#define ll long long int

// Trie Node
struct Node
{
    Node *next[26];    // Child
    int cntprefix = 0; // cntprefix to take aacount of prefix of each node
    int cntend = 0;    // cntend to take account of end of word
};

class Trie
{
private:
    Node *root; // root node

public:
    Trie()
    {
        root = new Node(); // Creating a new node
    }

    // Inserting Node
    void insert(string w)
    {
        Node *it = root;
        for (int i = 0; i < w.size(); i++)
        {
            if (!it->next[w[i] - 'a']) // here we are check is next is null or not.
            {
                it->next[w[i] - 'a'] = new Node();
            }
            it = it->next[w[i] - 'a'];
            it->cntprefix++; // Increasing the prefix of each node
        }
        it->cntend++; // Increase end
    }

    int countwordsEqualTo(string word)
    {
        Node *it = root;
        for (int i = 0; i < word.size(); i++)
        {
            if (it->next[word[i] - 'a'])
            {
                it = it->next[word[i] - 'a'];
            }
            else // if any null found means word not present.
                return 0;
        }
        return it->cntend; // Finfing the exact word
    }

    int wordStartWith(string w)
    {
        Node *it = root;

        for (int i = 0; i < w.size(); i++)
        {
            if (it->next[w[i] - 'a']) // not null then next node.
            {
                it = it->next[w[i] - 'a'];
            }

            else // if any null found means word not present.
            {
                return 0;
            }
        }
        return it->cntprefix; // Returning the prefix at given node of given string.
    }
};

int main()
{
    Trie T;
    vector<string>s; // The list
    int n; cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>s[i];
        T.insert(s[i]);
    }
    string check; 
    cin>>check;  // The prefix which we have to check.
    int ans = T.wordStartWith(check);
    cout << "The word which start from " << check << " is :" << ans << " in number in List.";
}
