class Solution{
  private:
      int kadaneMaxSum(int arr[], int n) {   // Kadane's Algorithm
          int sum = 0;
          int maxi = INT_MIN;    // Initializing maxSum as Integer Minimum Value
          for(int i=0; i<n; i++) {    // Running a for loop across the whole array - Time Complexity O(n)
              sum += arr[i];
              maxi = max(sum, maxi);  // Maximum of sum of that Subarray and the previous maximum possible sum
              if(sum < 0) sum = 0;    
          }
          return maxi;
      }

  public:
      int circularSubarraySum(int arr[], int num) {
          int nonCircularSum = kadaneMaxSum(arr, num); // Stores the maximum possible sum in a non-circular subarray
          int totalSum = 0;
          for(int i=0; i<num; i++){
              totalSum += arr[i];    // Calculating total sum so that we can subtract non-Circular sum from it so that we can check for circular sum
              arr[i] = -arr[i];
          }

          int circularSum = totalSum + kadaneMaxSum(arr, num);  // num is length of array
          if(circularSum == 0)
              return nonCircularSum;
          return max(circularSum,nonCircularSum);
      }
};
