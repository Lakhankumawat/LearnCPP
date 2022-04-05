#include<iostream>
#include <algorithm>

using namespace std;

//Brute force Approach
int maxSubArraySum1(int a[],int n)
{
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)    
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
                
            }
            maxSum = max(maxSum,sum); 
        }
    }
    return maxSum;
}


//Cumulative Sum Approach
int maxSubArraySum2(int a[],int n)
{
    const int N= n+1;
    int currsum[N];
    currsum[0] = 0;
    int maxSum = INT_MIN;

    for(int i=1;i<=n;i++)
    {
        currsum[i] = currsum[i-1] + a[i-1];
    }

    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum = currsum[i] - currsum[j];
            maxSum = max(sum,maxSum);
        }
    }
    return maxSum;
}


//kadene's algorithm
int maxSubArraySum3(int a[],int n)
{
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)//keep on updting currsum if its less than zero.
        {
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    return maxSum;
}

int main() {
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int a[n];
    //taking input of array from user
    cout<<"Enter values of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int x;
    cout<<"-----------CHOICES-----------\n1. Brute Force Approach \n2. Cumulative Sum Approach \n3. kadene's algorithm \n4. Exit \n"<<endl;
    cout<<"Enter the choice: ";
    cin>>x;
    switch (x) {
    case 1:
        cout << "Time Complexity O(n^3)"<<endl;
        cout << "Maximum contiguous sum is " <<maxSubArraySum1(a, n)<<endl;
        break;
    case 2:
        cout << "Time Complexity O(n^2)"<<endl;
        cout << "Maximum contiguous sum is " <<maxSubArraySum2(a, n)<<endl;
        break;
    case 3:
        cout << "Time Complexity O(n)"<<endl;
        cout << "Maximum contiguous sum is " <<maxSubArraySum3(a, n)<<endl;
    case 4:
        exit(x);
    default:
        cout << "Wrong Choice";
        break;
    }
    return 0;
}
