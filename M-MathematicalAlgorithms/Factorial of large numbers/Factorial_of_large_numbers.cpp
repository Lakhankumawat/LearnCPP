// for more understanding Youtube link > https://youtu.be/Rv4uNb2QX2w
// GFG Documentation > https://www.geeksforgeeks.org/factorial-large-number/

#include<bits/stdc++.h>
using namespace std;

/*
Doing simple multiplication 
for example if we have to multiply 
25*5 
first we multiply 5*5 =25
Now in 25 :> 5 will be stored and 2 will be carry 
then 2 will multiply with 5 will give 10 + we add carry that sum 12.
Now in 12 :> 2 will be stored and 1 will be carry
as there is no further digit remaining ,
So, Now we will store carry.
hence result will be 125
=====================
Same here i is like 5 and res[] is like 25
This function may value of size and returns the new value of size
*/

int factorial(int i,int res[],int size){

    int carry=0;  //Initial carry will be 0

    for(int k=0;k<size;k++){
        int prod=res[k]*i + carry;
        res[k]=prod%10;
        carry=prod/10;
    }
    while(carry){  // 
        res[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}

void solve(int n){
    //taking a array of size 1000 and initializing it with 0 
    int res[1000]={0};

    res[0]=1;  // Initializing factorial of 0 as 1

    int size=1;

    // Multiply f with 2, 3, ...n
    for(int i=2;i<=n;i++){
        size=factorial(i,res,size);
    }

    //Printing the factorial
    cout << "Factorial of given number is: "<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<res[i];
    }
}

int main(){
    int n;
    cout<<"INPUT A NUMBER :";
    cin>>n;
    solve(n);
}


/*
Time complexity = O(n log n!)

Space complexity= O(log n!)

*/
