// Celebrity Problem Code
#include <bits/stdc++.h>
using namespace std;
 
int CelebrityProblem(vector<vector<int>>& v1) 
{ 
    stack<int> s1;  
  
    for (int i = 0; i<v1.size(); i++) 
        s1.push(i); 
  
    while (s1.size()>1) 
    { 
        int temp1 = s1.top();
        s1.pop();

        int temp2 = s1.top();
        s1.pop();

        if (v1[temp1][temp2]) 
            s1.push(temp2);

        else
            s1.push(temp1);
    } 
    
    int potential_celeb=s1.top();

    for(int i=0; i<v1.size(); i++)
    {
        if(i==s1.top())
            continue;
        
        if(v1[potential_celeb][i]==1)
            return -1;
            
        if(v1[i][potential_celeb]!=1)
            return -1;
        
    }
  
    return potential_celeb; 
} 
  
int main() 
{ 
    vector<vector<int>> v1{ {0,0,1,1},
                            {1,0,1,0},
                            {0,1,0,0},
                            {0,1,1,0} };

    int celebrity = CelebrityProblem(v1);

    if(celebrity == -1)
        cout<<"No Celebrity Exists!"<<endl;
    else
        cout<<"Celebrity is Person Number "<<celebrity<<endl;

    return 0; 
} 
