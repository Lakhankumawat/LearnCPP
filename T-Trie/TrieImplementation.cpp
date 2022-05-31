#include <bits/stdc++.h>
using namespace std;

// Trie Node
struct Node
{
    Node *next[26];
    bool endofkey;
};

// Provides the node whenever new node encounters.
Node *ProvideNode()
{
    Node *temp = new Node;

    temp->endofkey = false;

    for (int i = 0; i < 26; i++)
        temp->next[i] = NULL;

    return temp;
}

void insert(Node *root, string key)
{
    Node *t = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!t->next[index]) // If key not exist then make new node of that
            t->next[index] = ProvideNode();

        t = t->next[index]; // else simple move to next index.
    }

    // mark last Node as ending of key
    t->endofkey = true;
}

// Returns true if key presents else false
bool search(Node *root, string key)
{
    Node *t = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!t->next[index]) // key not present then simply return false
            return false;

        t = t->next[index];
    }

    return (t->endofkey); // end of key means true only.
}

int main()
{
    string keys[] = {"trie", "gssoc", "contributor"};

    Node *root = ProvideNode();

    // Construct trie
    for (auto i : keys)
        insert(root, i);

    // Search for different keys
    cout << "\n----------------------------------------------------------------------";
    cout << "\n\n";
    search(root, "gssoc") ? cout << "Key [gssoc] present in Trie\n" : cout << "key [gssoc] is Not present \n\n";
    search(root, "gwoc") ? cout << "Key [gwoc] present in trie\n" : cout << "key [gwoc]  is not present \n\n";
    cout << "\n\n";
    cout << "----------------------------------------------------------------------\n\n";
    return 0;
}
