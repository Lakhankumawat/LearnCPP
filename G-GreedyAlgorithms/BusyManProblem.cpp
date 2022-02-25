

//------------------------------------PROBLEM : 👨‍💼BusyManProblem ----------------------------------
#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<vector>

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}

int main(){
    int t,no,s,e;
    vector<pair<int,int>> p;
    cin>>t;
    while(t--){
        cin>>no;
        for(int i=0;i<no;i++){
            cin>>s>>e;
            p.push_back(make_pair(s,e));
        }
        sort(p.begin(),p.end(),compare); //Sorting the jobs on the basis of their end times

        int res=1;
        int fin=p[0].second; //take the first job and sort remaining

        for(int i=1;i<no;i++){
            if(p[i].first>=fin){
                fin=p[i].second;
                res++;
            }
        }
        cout<<res<<endl;
        p.clear();
    }
}
