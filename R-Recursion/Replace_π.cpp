

//------------------------------------PROBLEM :String Replace PI using Recursion ----------------------------------
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))


//character array and index
void addPi(char s[]){
    //Base Case
    if(s[0]=='\0'){
        return ;
    }
    if(s[0]=='p'&&s[1]=='i'){
        s[0]='3';
        s[1]='.';
        //To update the size 
        for(int i=strlen(s)+2;i>1;i--){
            s[i]=s[i-2];
        }
        s[2]='1';
        s[3]='4';
    }
    //Recursive Call
    addPi(s+1);
}


int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

char arr[10000];
cin>>arr;
addPi(arr);

cout<<arr;

return 0;
}
