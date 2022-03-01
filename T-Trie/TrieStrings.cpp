/*

Implementation of the TRIE data structure to store strings.

Problem:

Given an array of N strings, and an array of Q queries, check for each query if it
it present in the array or not.

Why we Used Trie

We know we can do this using two loops one for the strings array and one for the queries 
but its time complexity will be O(N*N) and for very large test cases it will not work

So in case of Trie The time complexity for inserting and searching are O(Key_size)

Let use see how

Whenever we search or insert a string we only iterate over that string and make
required operations according to if current char of string is present or not

So Trie reduce our complexity from O(N*N) to O (key_size) where key size is the length
of string to be inserted or searched

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class node {

	public :

		char data;
        // To check if the current char is the ending character of a string or not
		bool terminal;
        // As their can be multiple strings from a character we will store all the nodes
        // starting from current char in map
		unordered_map<char, node*> childMap;

		node(char data) {
			this->data = data;
			this->terminal = false;
		}

};

class trie {
	node* root;

	public :

        // We will set the root as NULL 
		trie() {
			root = new node('\0');
		}

		void insert(string str) {
			node* temp = root;
            //we will check if the current node has a child node with the value ch
			for(char ch : str) {
                // temp node doesn't have a child node with data as ch
				if(temp->childMap.find(ch) == temp->childMap.end()) {
					// So make a new node with value ch
					node* n = new node(ch);
                    // Add it to our childMap
					temp->childMap[ch] = n;
                    // And go to the ch node to insert furthur
					temp = temp->childMap[ch];
				} 
                // temp node has a child node with data as ch so we just move to ch node
                // to insert furthur
                else 
					temp = temp->childMap[ch];
			}
            // Marking temp terminal as true bcz after loop temp is the last char of string
			temp->terminal = true;
		}

		bool search(string str) {
			node* temp = root;
			for(char ch : str) {
                // If temp do not have a childnode with value ch return false
                // as their is no need to search furthur
				if(temp->childMap.find(ch) == temp->childMap.end()) 
					return false;
                // if its present move to ch node to search furthur    
				temp = temp->childMap[ch];
			}
			return temp->terminal;
		}
};

int main() {

	vector<string> words = {"code", "coder", "C++",
                      "GSSOC", "girlscript", "LearnCPP",
                      };

    trie t;
    for(string word : words)
    	t.insert(word);

    vector<string> queries = {"coder", "codes", "C++", "GSSoc", "LearnCPP"};

    for(string query : queries) 
    {
        // if currern query of queries is present in Trie we will print query present
        // otherwise query not present
    	t.search(query) ? cout << query << " :  present" << endl :
    	                  cout << query << " : not present" << endl; 
    }

	return 0;
}