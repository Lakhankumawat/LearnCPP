#include <bits/stdc++.h>
using namespace std;
vector<int>output;
int n_arr, n_tmp;
string s_arr, s_tmp;

void take_input(){
    cout<<"Enter the siz of array\n";
    cin >> n_arr;
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n_arr; ++i) {
        s_arr = "";
        while (s_arr.empty()) {
            getline(cin, s_arr);
        }
        istringstream all(s_arr);
        while (all >> s_tmp){
            n_tmp = stoi(s_tmp);
            output.push_back(n_tmp);
        }
    }
}

void print_sorted_arrays(){
    sort(output.begin(),output.end());
    for(auto val:output){
        cout << val << ' ';
    }
}
int main() {
    take_input();
    print_sorted_arrays();
}
