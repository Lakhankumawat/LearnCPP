

//------------------------------------PROBLEM :Tower Of Hanoi ----------------------------------
#include <bits/stdc++.h>
using namespace std;


void TOH(int n,char src,char helper,char dest){
if(n==0){//no disks left 
    return;
}

TOH(n-1,src,dest,helper);
cout<<"Disk "<<n<<" is moved from "<<src<<" to "<<dest<<endl;
TOH(n-1,helper,src,dest);
}



int main()
{
  //TO decrease the time of cin and cout operations 
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

int n;
cin>>n;//total disks
TOH(n,'A','B','C');

return 0;
}
