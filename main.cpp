#include <iostream>
using namespace std;
int main() {
    int n ,j=0;
    cin>>n;
    char c=' ';
    string s,new_s;
    cin>>s;
//    the following line makes a new string with main size n
    for (int i = 0; i < n; ++i) new_s=new_s+c;


    for (int i = n - 2; i >= 0; i -= 2, ++j) {
        string z;
        z = s[i];
        new_s.insert(j, z);
    }
    if (n%2==0) {
        for (int i = 1; i <= n; i += 2, j++) {
            string z;
            z = s[i];
            new_s.insert(j, z);
        }
    }
    else {
        for (int i = 0; i < n; i+=2,j++) {
            string z;
            z=s[i];
            new_s.insert(j,z);
        }
    }
    cout<<new_s<<endl;
    return 0;
}