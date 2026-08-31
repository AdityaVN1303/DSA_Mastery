// LC 53 - Maximum Subarray 

// Kadane's Algorithm 
// TC - O(N)
// SC - O(1)
int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int best = nums[0];
        for(int i=0; i<nums.size(); ++i){
            sum = max(nums[i] , sum+nums[i]);
            best = max(best , sum);
        }
        return best;
    }

// Prefix Sum 
// TC - O(N)
// SC - O(1)
// Observation => maxSum = currentSubarraySum - minimumSubarraySum
int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = nums[0];
        int minSum = 0;
        for(int i=0; i<nums.size(); ++i){
            currentSum += nums[i];
            maxSum = max(maxSum , currentSum - minSum);
            minSum = min(minSum , currentSum);
        }
        return maxSum;
    }
};
