//------------Optimal Merge Pattern--------//
#include <bits/stdc++.h>

using namespace std;

// Calculating minimum computations to merge file optimally
int min_computation(int size, int files[]){
    int i,total_computation=0;
    
// creating minheap (insertin files size)
    priority_queue<int, vector<int>, greater<int> > pq;
    for(i=0;i<size;i++){
        pq.push(files[i]);
    }

    while(pq.size()>1) //merge untill priority queue is not empty
    {
        int lweight=pq.top();
            pq.pop();
        int rweight=pq.top();
            pq.pop();
        int rootweight= lweight + rweight;
        total_computation+= rootweight;
        pq.push(rootweight);
    }
    return total_computation;
}

//-----main-------//
/*
files[5]={2,4,7,9,12}
[2,4 merge ->6]
[6,7 merge ->13]
[9,12 merge -> 21]
[13,21 merge -> 34]  therefore minimum computation are (6+13+21+34) 74 */
int main()
{
    int nfile;
    cout<<"Enter the number of files : ";
    cin>>nfile; //total files
    int *files = new int(nfile);
    for(int i=0;i<nfile;i++){
        cout<<"Enter the file "<<i+1<<" weight : ";
        cin>>files[i];
    }

    cout<<"Minimum computation required to merge all files in one file are "<<min_computation(nfile,files)<<endl;
 return 0;
}