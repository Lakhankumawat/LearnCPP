#include<vector>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rearrange(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){

            if(v[i]<v[i+1]){
                break;
            }
            swap(v[i],v[i+1]);


    }
}
void merge(vector<int>& a, int m, vector<int>& b, int n) {
    if(m !=0 && n!=0){
    int i=0;
    for(int i=m;i<a.size();i++){
        a[i]=INT_MAX;
    }
    while(i<a.size()){
        if(a[i]>=b[0]){
            swap(a[i],b[0]);
            rearrange(b);
        }
        i++;
    }
    }
}

int main(){
    vector<int> a={1,2,3,5,0};
    vector<int> b={4};
   /* int al,bl;
    cout<<"enter number of elements in first array:\n";
    cin >>al;
    cout<<"enter number of elements in secound array:\n";
    cin>>bl;

    for(int i=0;i<al;i++){
        int a2;
        cin>>a2;
        a.push_back(a2);
    }

    for(int i=0;i<bl;i++){
        int b2;
        cin>>b2;
        b.push_back(b2);
        a.push_back(0);
    }*/

    merge(a, 3, b, 2);
    cout<<"b:"<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"a:"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<a.size();i++){
        if(a[i] == INT_MAX){
            a[i]=0;
        }
    }



}
