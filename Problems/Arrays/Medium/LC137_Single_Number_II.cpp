// LC 137 - Single Number II

// Can be Solved with Bit Manipulation for Optimal Solution. 

// Math - Multiplicity Difference (Hashset Optimized Approach) (Non Optimal)
// TC - O(N)
// SC - O(N)
// Formula ---> 3*sum(unique) - sum(array) = 2*singleNumber
int singleNumber(vector<int>& nums) {
        unordered_set<int> stt(nums.begin() , nums.end());
        
        long long currentSum = 0;
        for(int x : nums){
            currentSum += x;
        }

        long long totalSum = 0;
        for(int x : stt){
            totalSum += 3LL * x;
        }

        return (int) ((totalSum - currentSum)/2);
    }
