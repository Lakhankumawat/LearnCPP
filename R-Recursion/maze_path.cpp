#include<bits/stdc++.h>
using namespace std;

static int a = 0;
 int n1,n2;
void maze(int i,int j,string s){
	if(i == n1-1 && j == n2-1){
		cout<<s<<" ";
		a += 1;
		return;
	}
	if(i < n1-1){
		maze(i+1,j,s+"V");
	}
	if(j < n2-1){
		maze(i,j+1,s+"H");
	}
	
}
int main() {
	cin>>n1>>n2;
	maze(0,0,"");
	cout<<"\n"<<a;
	a = 0;
	return 0;
}