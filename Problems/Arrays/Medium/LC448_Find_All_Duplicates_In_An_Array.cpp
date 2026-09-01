// LC 448 - Find All Duplicates in an Array 

// Can also be solved with sorting and hashing

// Cyclic Sort 
// TC - O(N)
// SC - O(1)
vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while(i < nums.size()){
            int correct = nums[i]-1;
            if(nums[i] != nums[correct]){
                swap(nums[i] , nums[correct]);
            }
            else{
                i++;
            }
        }

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != i+1){
                ans.push_back(i+1);
            }
        }

        return ans;
    }

// Inplace Negation 
// TC - O(N)
// SC - O(1)
vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); ++i){
            int correct = abs(nums[i]) - 1;
            if(nums[correct] > 0) nums[correct] = -nums[correct];
        }

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
