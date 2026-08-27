// LC - 136 - Single Number 

// Approaches

// Sorting
// TC - O(NlogN)
// SC - O(1)
int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // Jump by 2 Because Frequency is 2 for Every Element except One.
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        // Ex - [1 , 1 , 2 , 2 , 3] (used for getting the 3)
        return nums.back();
    }

// Map - Frequency Count 
// TC - O(N)
// SC - O(N)
int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }
        
        for (auto const& [num, count] : freq) {
            if (count == 1) {
                return num;
            }
        }
        
        return -1;
    }

// Set Approach - If there , remove , if not insert
// TC - O(N)
// SC - O(N)
// Hint - Element Appearing Twice will get inserted once and removed once , Element Appearing Once will get inserted once but not removed. 

int singleNumber(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            if (seen.count(num)) {
                seen.erase(num);
            } 
            else {
                seen.insert(num);
            }
        }
        return *seen.begin();
    }

// XOR (Optimal)
// TC - O(N)
// SC - O(1)
// Every Elements Appears Twice - XOR cancels Each other , Except One - Left Alone
int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            ans^=x;
        }
        return ans;
    }

// Math Formula - (k*(Sum of all Unique Elements) - (Sum of All Elements))/(k-m)
// TC - O(N)
// SC - O(N)
// Hint - Frequency of Every Number = 2 , Only One Number is 1 , Direct Formula Application

int singleNumber(vector<int>& nums) {
        unordered_set<int> unique_elements(nums.begin(), nums.end());
        
        long long sum_unique = 0;
        for (int num : unique_elements) {
            sum_unique += num;
        }
        
        long long sum_all = accumulate(nums.begin(), nums.end(), 0LL);
        
        return 2 * sum_unique - sum_all;
    }


