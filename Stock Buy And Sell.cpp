#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& v){

    int maxd=0; //maximum profit initially 0 as if we can not earn profit we have to return 0
    int itr=INT_MAX; //buying process should be minimum so if initialize it as max int

    for(int i=0;i<v.size();i++){// To search complete vector(dynamic array)
        if(itr>v[i]){ // check whether the it's cost price is greater then previous cost price
           itr=v[i];//set minimum local buying cost
        }
        else if(v[i]-itr>maxd){ //check whether difference between current minimum cost price and current selling price is maximum or not
            maxd=v[i]-itr;//set local maximum profit (difference of selling price and buying price is profit)
            //Note: from here we can also find buying and selling cost as V[i] selling and itr is buying costs here
        }
    }
    return maxd;//returning global maximum profit

}
//Time complexity: O(n)
//Space complexity: O(1)

int main(){
    vector<int> v={7,6,4,3,1};

    cout<<maxProfit(v);
}


