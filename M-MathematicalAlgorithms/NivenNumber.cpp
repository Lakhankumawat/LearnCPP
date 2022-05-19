#include<iostream>
using namespace std;

int NivenCheck(int a){
    int sum=0;  //to store the sum of the digits of the entered number by the user
    int temp=a; //storing the duplicate of the entered number and using it to perform operations(a preferred practice)

    //Extracting the digits of the input number amd adding to variable sum
    while(temp!=0){
        sum=sum + temp%10;
        temp /=10;
    }            
    return(a%sum == 0); //checking divisibility of the input number(here, a) with sum
}

//Driver method
 int main(){
     
     //Taking input from user
     int n;
     cout<<"Enter the number to be checked:"<<endl;
     cin>>n;
     
     //Calling NivenCheck() method to check if the entered number is a Niven/Harhsad number.
     if(NivenCheck(n))
     cout<<n<<" is a Niven/Harshad number.";
     else
     cout<<n<<" is not a Niven/Harshad number.";
     
     return 0;
 }