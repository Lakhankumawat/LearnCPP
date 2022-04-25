// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
 // return an array of all the integers that appears twice.
  #include<bits/stdc++.h>
using namespace std;
    vector<int> findDuplicates(vector<int> nums) {
         vector <int> x;  
        int n =nums.size();
        int i=0;  
          while(i<n) 
       {
           int value=nums[i]-1;
            if(nums[i]!=nums[value])
                //&&  nums[value]!=nums[i])
            {
              int temp= nums[i];
                nums[i]=nums[value];
                nums[value]=temp;
            } 
              
            else 
                i++;
            
        }
        
          for(int i=0;i<n;i++)
        {
            if(nums[i]!=(i+1))
                x.push_back(nums[i]);
        }
        return x;
    }
int main()
{
    int n ;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    vector<int> x,y;
  cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
        {
           cin>>a[i];
           x.push_back(a[i]);            
        }
    y=findDuplicates(x);
    int z=y.size();
  cout<<"The duplicate elements in the array are : "<<endl;
     for(int i=0;i<z;i++)
        {
           cout<<y[i]<<" ";           
        }
        cout<<endl;
        return 0;
}
