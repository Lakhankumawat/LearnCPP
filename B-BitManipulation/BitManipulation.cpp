

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
int clearLastnBits(int &n ,int x){
 int mask = (-1<<x);
 return n&mask;
}
int clearBitsRange(int &n,int x,int y){
int a = (-1<<(y+1));
int b = (1<<x)-1;
int mask = a|b;
return n&mask;

}

int main()
{


int n,position,value,choice,i,j;
while(1){
cout<<"Enter a number : ";
cin>>n;
cout<<"Enter Your Choice : "<<endl;
cout<<"1.getBit  2.setBit  3.clearBit  4.updateBit\n5.clearLastnBits  6.clearRange : ";
cin>>choice;
    if(choice!=6){
    cout<<"Enter Position :";
    cin>>position;}
switch(choice){
case 1:
    cout<<"Bit at "<<position<<" is"<<getBit(n,position)<<endl;break;
case 2:
    cout<<"After Setting bit at "<<position<<" no. is : "<<setBit(n,position)<<endl;break;
case 3:
    cout<<"After Clearing bit at "<<position<<" no. is : "<<clearBit(n,position)<<endl;break;
case 4:
    cout<<"Enter value(to update 0/1):";
    cin>>value;
    cout<<"Updated bit at "<<position<<" to "<<value<<" : "<<updateBit(n,position,value)<<endl;break;
case 5:
    cout<<"After Clearing last "<<position<<" bits no. is : "<<clearLastnBits(n,position)<<endl;break;
case 6:
    cout<<"Enter range i to j (i<=j):";
    cin>>i>>j;
    cout<<"After Clearing Range from "<<i<<" to "<<j<<" no. is : "<<clearBitsRange(n,i,j)<<endl;break;
};

}
return 0;

}

/*---------OUTPUT----------
Enter a number : 15
Enter Your Choice :
1.getBit  2.setBit  3.clearBit  4.updateBit
5.clearLastnBits  6.clearRange : 5
Enter Position :2
After Clearing last 2 bits no. is : 12
Enter a number : 31
Enter Your Choice :
1.getBit  2.setBit  3.clearBit  4.updateBit
5.clearLastnBits  6.clearRange : 6
Enter range i to j (i<=j):1 3
After Clearing Range from 1 to 3 no. is : 17
-------------------*/
