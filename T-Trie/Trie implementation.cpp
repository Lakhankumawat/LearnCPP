#include "bits/stdc++.h"

using namespace std;

/** Trie is an efficient information reTrieval data structure.
 - Using Trie, search complexities can be brought to optimal limit (key length).
 - If we store keys in binary search tree, a well balanced BST will need time proportional to M * log N, where M is maximum string length and N is number of keys in tree.
 - Using Trie, we can search the key in O(M) time.
**/
const int ALPHABET_SIZE = 26;

// trie node

struct TrieNode {
    vector <TrieNode*>children;
    // isEndOfWord is true if the node represents
    // end of a word
    bool isEnd;
    TrieNode() :
        children(vector <TrieNode*>(ALPHABET_SIZE, nullptr)), isEnd(false) {}
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void){
    struct TrieNode *pNode =  new TrieNode;

    pNode->isEnd = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = nullptr;
    return pNode;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just
// marks leaf node

void insert(TrieNode *trie, string word) {
    TrieNode *current = trie;
    for(auto key : word) {
        int index = key - 'a';
        if(!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    // mark last node as leaf
    current->isEnd = true;
}

// Returns true if key presents in trie, else
// false
bool search(TrieNode *trie, string word) {
    struct TrieNode *current = trie;

    for (auto key : word) {
        int index = key - 'a';
        if (!current->children[index])
            return false;
        current = current->children[index];
    }
    return current->isEnd;
}


int32_t main() {
    vector<string> words = {"the", "a", "there",
                            "answer", "any", "by",
                            "bye", "their"
                           };
    int n = (int)words.size();
    TrieNode *trie = getNode();

    // Construct trie
    for (int i = 0; i < n; i++) {
        insert(trie, words[i]);
    }
    search(trie, "the")? cout << "Yes\n" :cout << "No\n";

    search(trie, "these")? cout << "Yes\n" :cout << "No\n";
}
