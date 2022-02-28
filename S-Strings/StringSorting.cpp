

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

 bool comp(string s1,string s2){
 if (s1.length()==s2.length()){
    return s1<s2;
 }

 return(s1.length()>s2.length());
 }


int main(){

int n;
cin>>n;
cin.get();
string s[n];//vector



for(int i=0;i<n;i++)
    getline(cin,s[i]);

    //Sorting lexi
   sort(s,s+n,comp);

    for(int i=0;i<n;i++)
    cout<<s[i]<<endl;
return 0;
}


