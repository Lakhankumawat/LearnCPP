

#include <bits/stdc++.h>
using namespace std;


int getBit(int &n,int x){
    int mask= (1<<x);
int bit = mask&n?1:0;
return bit;

}
int setBit(int &n,int x){
    int mask=1<<x;
    int setbit = mask|n;
return setbit;
}

int clearBit(int &n,int x){
    int mask = ~(1<<x);
    n=n&mask;
    return n;
}
int updateBit(int &n,int x,int v){

     int mask = ~(1<<x);
     int cleared=n&mask;
     n = cleared | (v<<x);
    return n;
}

int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

int n;
int position;
int value;

cin>>n>>position>>value;

cout<<"Bit at "<<position<<" is"<<getBit(n,position)<<endl;
cout<<"After Setting bit at "<<position<<" no. is : "<<setBit(n,position)<<endl;
cout<<"After Clearing bit at "<<position<<" no. is : "<<clearBit(n,position)<<endl;
cout<<"Updated bit at "<<position<<" to "<<value<<" : "<<updateBit(n,position,value)<<endl;

return 0;
}

/*---------OUTPUT----------
7
2
1
Bit at 2 is 1
After Setting bit at 2 no. is : 7
After Clearing bit at 2 no. is : 3
Updated bit at 2 to 1 : 7


Explanation:
7 = 111
1. position 2 starting from 0 bit is 1
2. as bit at pos 2 is alredy 1 so setting to 1 no. remains same
3. clearing no becomes 011 i.e 3
4. updating to value 1 at bit pos. 2 becomes 111 i.e 7
similarly go for other
-------------------*/
