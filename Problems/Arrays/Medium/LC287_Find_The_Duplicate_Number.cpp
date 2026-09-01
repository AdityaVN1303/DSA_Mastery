// LC 287 - Find Duplicate Number

// Can also be solved with sorting and hashing (Non Optimal)

// Question asks to solve in O(N) and in SC O(1) but without modfying the original array 


// Cyclic Sort (Non Optimal)
// TC - O(N)
// SC - O(1)
int findDuplicate(vector<int>& nums) {
        int i=0; 
        while(i < nums.size()){
            int correct = nums[i] - 1;
            if(nums[i] < nums.size() && nums[i] != nums[correct]){
                swap(nums[i] , nums[correct]);
            }
            else{
                i++;
            }
        }

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != i+1) return nums[i];
        }
        return -1;
    }

// Inplace Negation (Non Optimal)
// TC - O(N)
// SC - O(1)
int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); ++i){
            int correctIdx = abs(nums[i])-1;
            if(nums[correctIdx] > 0) nums[correctIdx] = -nums[correctIdx];
            else return abs(nums[i]);
        }
        return -1;
    }
