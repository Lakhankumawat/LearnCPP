class Solution {
public:
    bool exist(vector<vector<char>>& b, string w) {
        int m = b.size();
        int n=b[0].size();
        int wrdl = w.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(solve(b,i,j,m,n,w,0,wrdl))return true;
            }
        }
        return 0;
    }
  // solve is the helping function
    bool solve(vector<vector<char>>& b,int r,int c,int m,int n,string word,int idx,int len){
        
        bool res=0;
        if(word[idx]!=b[r][c])return false;
        if(idx==len-1)return true;
        char currc=b[r][c];
        b[r][c]='*';
        if(r>0&&!res)res=solve(b,r-1,c,m,n,word,idx+1,len);
        if(c>0&&!res)res=solve(b,r,c-1,m,n,word,idx+1,len);
        if(r<m-1&&!res)res=solve(b,r+1,c,m,n,word,idx+1,len);
        if(c<n-1&&!res)res=solve(b,r,c+1,m,n,word,idx+1,len);
        b[r][c]=currc;
        return res;
    }
};
