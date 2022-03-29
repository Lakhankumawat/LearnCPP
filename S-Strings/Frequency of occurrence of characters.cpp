#include <iostream>
#include<string>
using namespace std;

int main()
{
    char ans='a';
    int maxfreq=0;
    string s="rayaaaaa";
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    cout<<ans<<" "<<maxfreq;

    return 0;
}

