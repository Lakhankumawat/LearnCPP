#include<iostream> 
#include<set>
#include<string>
using namespace std;
// https://www.geeksforgeeks.org/find-kth-distinct-character-from-start-of-given-given-string/
 
// Function for printing the Kth distinct character using sets
int printKthDistinct(string& str, int& k)
{
    //Declaring a set named uniqueEle
    set<int> uniqueEle;
    int n = str.length();
    //Traversing the given string and finding the kth unique/ distinct element
    for (int i = 0; i < n; i++) {
        uniqueEle.insert(str[i]);
        if (uniqueEle.size() == k)
            return str[i];
    }
    return -1;
}
 
int main()
{
    //taking the input from the user
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    int k;
    cout<<endl<<"Enter the value of k: ";
    cin>>k;
    int ans = printKthDistinct(str, k);
    if (ans == -1)
        cout << -1;
    else
        cout << (char)ans;
    return 0;
}