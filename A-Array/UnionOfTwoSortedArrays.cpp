#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	cout<<"Enter first array elements\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter second array elements\n";
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
    int i=0,j=0;
    	vector<int>result;
       set<int>res;
        for(int i=0;i<n;i++){
            res.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            res.insert(b[j]);
        }
        //we can also use unordered_set if its mention in question that the order
        //of output elements not matter.
        //unordered_set are same as set except that they don't maintain order of elements
        //The order of elements in unordered_set will depend on hashes the computer generates
        //They will be stored in that order only.
        cout<<"union using sets\n";
        for(auto it:res){
        cout<<it<<" ";
		} 
		cout<<"\n";
		
		// Time Complexity: O(n+m) 
		//It handles duplicacy also.
		
		
		//second method

	while(i<n && j<m){
		if(a[i]<b[j] && find(result.begin(),result.end(),a[i])==result.end()){
			result.emplace_back(a[i]);
			i++;
		}
		else if(a[i]>b[j] && find(result.begin(),result.end(),b[j])==result.end()){
			result.emplace_back(b[j]);
			j++;
			
		}
		else if(a[i]==b[j] && find(result.begin(),result.end(),a[i])==result.end()){
			result.emplace_back(a[i]);
			i++;
			j++;
		}
	}
	
	while(i<n && find(result.begin(),result.end(),a[i])==result.end()){
		result.emplace_back(a[i]);
		i++;
	}
		while(j<m && find(result.begin(),result.end(),b[j])==result.end()){
		result.emplace_back(b[j]);
		j++;
	}
	cout<<"Union using vectors is:\n";
	for(auto it:result){
		cout<<it<<" ";
	}
	//time: O(n+m) space:O(1)




}
