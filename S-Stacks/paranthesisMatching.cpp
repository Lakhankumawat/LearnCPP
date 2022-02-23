#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;
string isbalanced(string s)
{
    unordered_map<char, int> m = {{'{', -1}, {'(', -2}, {'[', -3}, {'}', 1}, {')', 2}, {']', 3}};
    stack<char> st;
    for (char ch : s)
    {
        if (m[ch] < 0)
            st.push(ch);
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (m[top] + m[ch] != 0)
                return "NO";
        }
    }

 return "YES";
}
    int main()
    {
        int t;
        cout<<"Enter number of tet cases : ";
        cin>>t;
        while(t--){
        string s;
        cin >> s;
        cout<<isbalanced(s)<<endl;
        }
        return 0;
    }