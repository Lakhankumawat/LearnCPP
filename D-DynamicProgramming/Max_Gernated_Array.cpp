#include <bits/stdc++.h>
using namespace std;
int getMaximumGenerated(int n){
	vector<int> dp(n+1);
	if(n==0){
		return 0;
	}	
	if(n==1){
		return 1;
	}
	dp[0] = 0;
	dp[1] = 1;	
	int result = -1234;
	for(int i = 2; i<=n;++i){
		int num = i/2;
		if(i%2){
			dp[i] = dp[num]+dp[num+1];
		}
		else{
			dp[i] = dp[num];
		}
		result = max(result,dp[i]);
	}
	for(auto x:dp){
		cout<<x<<" ";
	}
	dp[n] =  result;
	return dp[n];
}

int main(){
	int n;cin>>n;
	cout<<getMaximumGenerated(n);
}