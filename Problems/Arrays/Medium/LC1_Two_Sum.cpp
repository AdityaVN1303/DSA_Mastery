// LC 1 - Two Sum 

// Can also be solved with sorting

//  Hashing (map)
// TC - O(N) , worst O(N^2)
// SC - O(N)
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mpp;

        for(int i=0; i<nums.size(); ++i){
            int compliment = target - nums[i];

            if(mpp.find(compliment) != mpp.end()){
                return vector<int>{mpp[compliment] , i};
            }

            mpp[nums[i]] = i;
        }

        return vector<int>{-1 , -1};
    }


// Nested Loops (Brute Force)
// TC - O(N^2)
// SC - O(1)
