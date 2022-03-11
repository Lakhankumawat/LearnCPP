#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split_string(string s, char separator) {
	/*
	Takes a string and a seperator and returns a vector<string> with all substrings
	before and after each seperator.
	*/
	
    vector<string> splits;
    string substr;
    for (char c: s) {
        if (c == separator) {
            if (!substr.empty()) {
                splits.push_back(substr);
                substr.clear();
            }
        } else {
            substr.push_back(c);
        }
    }
	// this last push_back is to add last sub-string to the vector
    if (!substr.empty())
        splits.push_back(substr);
    return splits;
}

int main() {
	// example usage
    int idx = 1;
    for (auto s: split_string("Hello, World!  ", ' ')) {
        cout << idx << ": " << s << endl;
        idx++;
    }
    return 0;
}
