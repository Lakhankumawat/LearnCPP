

//------------------------------------PROBLEM :String Replace PI using Recursion ----------------------------------
#include <bits/stdc++.h>
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
void addPi(char s[],int i){
if(s[i]=='\0' and s[i+1]=='\0'){
    return;
}
if(s[i]=='p' and s[i+1]=='i'){
    int j=i+2;
    while(s[j]!='\0')j++;

    while(j>=i+2){
        s[j+2]=s[j];
        j--;
    }
    s[i]='3';
    s[i+1]='.';
    s[i+2]='1';
    s[i+3]='4';

    addPi(s,i+4);
}else{
    //no p and corresponding 'i'
    addPi(s,i+1);
}

}


int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

char arr[10000];
cin>>arr;
addPi(arr,0);

cout<<arr;

return 0;
}
