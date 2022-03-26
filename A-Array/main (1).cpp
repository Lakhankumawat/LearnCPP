#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>numbers ;
    cout<<"hello user"<<endl;
    cout<<"enter the size of vector...:"<<endl;
    int s;
    cin>>s;
    int k;
    for(int i = 0;i<s;i++)
    {
        cout<<"please enter a number that you want to reverse them.....:"<<endl;
        
        cin>>k;
        numbers.push_back(k);
        
    }
    reverse(numbers.begin(),numbers.end());
    for(int i =0; i<s;i++)
    {
        cout<<numbers[i]<<" ";
    }
    
    

    return 0;
}
