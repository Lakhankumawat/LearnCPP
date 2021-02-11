
//PLease read the text file Vectors.md in this directory before precedding further

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    for(int i=0;i<5;i++)
    v.push_back(i+1);

    for(auto o= v.begin();o!=v.end();o++){
        cout<<*o;
    }


    return 0;
}

