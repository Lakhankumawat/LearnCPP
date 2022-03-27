#include <iostream>
#include <vector>
using namespace std;

int main(){
    string word, original;
    cin >> word;
    original = word;
    vector<string> permutations(1);
    sort(word.begin(), word.end());
    int rank = 0;
    do {
        permutations.push_back(word);
    } while(next_permutation(word.begin(), word.end()));

    for (auto & permutation : permutations) {
        if (permutation != original)
            rank++;
        else if (permutation == original)
            break;
    }
    cout << rank;

    return 0;
}