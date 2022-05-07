#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int helper(string & s, int tar){

    int cont=0;
    for(int i=0;i<s.length();i++){
        int n=0; //init number
        for(int j = i;j<s.length();j++){
          n= n*10+ int(s[j])-int('0');//combine digits to generate numbers
          if(n%tar==0){ //check if the number is divisible by the given number then increment count value
            cont++; //increment count
          }
        }
    }
    return cont; //return answer
}

int counting_divisible_substring(string &s){
    int ans=helper(s, 6)%((int)(pow(10.0,9.0))+7); //check number of subset divisible with 6 and the apply ans%(10^9+7)
    return ans;
}

//Time complexity: O(n^2) where n is number of digits
//Space complexity: O(1)

int main(){
    string s;
    cout<<"Enter your string: "<<endl; // take string input
    cin>>s;
    int cont;
    cont = counting_divisible_substring(s); // get results
    cout<<"Output: "<<(cont%((int)(pow(10.0,9.0))+7))<<endl;
    return 0;
}
