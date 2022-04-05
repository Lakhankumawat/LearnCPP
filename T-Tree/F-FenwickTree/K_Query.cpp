#include<stdio.h>
#include<bits/stdc++.h>
#define lli long long int
#include<utility>
using namespace std;
struct P{
    lli v,idx;
};
struct event{
    lli value;
    lli l,r,ind;
};
bool com(P a,P b){
    return a.v>b.v;
}
bool compare(event a,event b){
    return a.value>b.value;
}

lli BIT[300005];
lli ans[200005];
//the update function
void update(lli p,lli val){
    while(p<300005){
        BIT[p]+=val;
        p+=p&(-p);
    }
}
//the query function
lli queri(lli p){
    lli sum=0;
    while(p){
        sum+=BIT[p];
        p-=p&(-p);
    }
    return sum;
}
int main()
{
    lli n;
    scanf("%lld",&n);
    P a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i].v);
        a[i].idx=i;
    }
    //sorting needed so that the bits where they are stored can be maintained according to the index
    sort(a+1,a+n+1,com);
    lli q;
    scanf("%lli",&q);
    event t[q];
    for(int i=0;i<q;i++){
        scanf("%lld %lld %lld",&t[i].l,&t[i].r,&t[i].value);
        //cin>>t[i].l>>t[i].r>>t[i].value;
        t[i].ind=i;
    }
    //the qeueries are sorted so that there are no overlaps
    sort(t,t+q,compare);
    lli g=1;
    for(int i=0;i<q;i++){
        
     while(a[g].v>t[i].value)
     //the update query
       {update(a[g].idx,1);g++;}
       //the sum query
        	ans[t[i].ind]=queri(t[i].r)-queri(t[i].l-1);
    }
    for(int i=0;i<q;i++){
        printf("%lld\n",ans[i]);
    }
	return 0;
}
