// LC 229 - Majority Element II

// Approaches

// Can be solved with hashing or sorting , but can be optimized. 

// Boyer-Moore Voting Algorithm 
// TC - O(N)
// SC - o(1)
vector<int> majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return vector<int>{nums[0]};
        int n1 = nums[0];
        int n2 = nums[1];
        int count1 = 0;
        int count2 = 0;
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == n1){
                count1++;
            }
            else if(nums[i] == n2){
                count2++;
            }
            else if(count1 == 0){
                n1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                n2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for(int x : nums){
            if(x == n1) count1++;
            if(x == n2) count2++;
        }

        vector<int> ans;
        if(count1 > nums.size()/3) ans.push_back(n1);
        if(count2 > nums.size()/3 && n2 != n1) ans.push_back(n2);

        return ans;
    }
