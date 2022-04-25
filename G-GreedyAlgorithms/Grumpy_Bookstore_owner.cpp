// A grumpy owner who gets angry on some minutes throughout the day.
// customers don't like grumpy behaviour and are not satisfied by his behaviour.
// Bookstore owner knows a secret technique to keep not grumpy for a given 'n' minutes but can do this once only.
// Return max customers satisfied

//Input: Customers = [1,0,1,2,1,1,7,5]
       //grumpy = [0,1,0,1,0,1,0,1]          [1 -> not satisfied]
       //minutes = 3                         [0 -> satisfied]
      //output = 16

// Explanation: The bookstore owner keeps themselves not grumpy for the last 3 minutes.
// Max customer satis = 1+1+1+1+7+5 = 16

// Approach - This is a medium to hard question on leetcode which tests your problem solving and greedy skills.
// To approach this question we need to first calculate the customers who are happy when the owner is not grumpy.
// as we have a particular time duration wherein the owner cannot be grumpy and we need to use this at the correct time in order to maximise our result.
// we use greedy and sliding window approach as we find the window wherin the result is max. We have created two pointers for sliding window and one for the final res and extra to remove the element from the window.
// end-start is the window size of sliding window



 class solution{
     public:

     int maxSatisfied(vector<int>& customers,vector<int>& grumpy, int minutes){

         int happy = 0;
        
        for(int i =0;i<customers.size();i++){
            if(grumpy[i]==0){
                happy += customers[i];
            }
        }
        int end = 0;
        int start = 0;
        int extra = 0;
        int res = 0;

        for(int end = 0;end<customers.size();end++){
            if(grumpy[i]==1){
                extra += customers[end];
            }
            while((end-start)>= min){
                if(grumpy[start]==1){
                    extra -= customers[start];
                    start++;
                }
            }
            res = max(res,extra);
        }
     }
     return res+happy;
 }
 
       