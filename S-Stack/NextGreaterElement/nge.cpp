// Print the Next Greater Element (NGE) for each element in an array. The first greater element on the right side of x in the array is the Next greater Element for an element x. Consider the next greater element as -1 for elements for which there is no greater element.

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());     // creating a nge vector of the same size as v
    stack<int> st;                 //declaring a stack 
    st.push(0);                     //pushing the 0th index in stack
    for (int i = 1; i < v.size(); ++i) 
    {
        while (!st.empty() && v[i] > v[st.top()]) 
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int n;
    cout << "Enter number of elements in array" << endl;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. "<<i+1<<" : ";
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "-->" << ( nge[i]==-1? -1 : v[nge[i]] ) <<endl;
    }
    return 0;
}