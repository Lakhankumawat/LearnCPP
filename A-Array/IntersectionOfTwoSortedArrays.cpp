#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	cout<<"enter elements of first arr\n";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"enter elements of second arr\n";
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}

	vector<int>result;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]==arr2[j] && find(result.begin(),result.end(),arr1[i])==result.end()){
                result.emplace_back(arr1[i]);
            }
            //here find() makes sure the element we are pushing in the vector is not already present 
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        cout<<"The intersection of given arrays is:\n";
        for(auto it:result){
        	cout<<it<<" ";
		}
		//it also checks duplicates. 
		//Time Complexity:O(n+m)
}
