class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
      
        int currSum = 0, maxSum = INT_MIN;
        for(int i = 0; i<n; ++i){
            currSum += arr[i];
            maxSum = max(currSum, maxSum);
            if(currSum<0)
                currSum = 0;
        }
        return maxSum;
    }
};
