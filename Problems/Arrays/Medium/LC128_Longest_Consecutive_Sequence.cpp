// LC 128 - Longest Consecutive Sequence

// Can be solved with Sorting or hashing or nested loops , but PS will not allow to run in more than O(N) TC.

// Set (Optimal) Approach
// TC - O(N) 
// SC - O(N)
// Failed at --- Iterating over nums instead of stt , causing TLE. (nums also contains duplicate elements)
int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> stt(nums.begin() , nums.end());

        int count = 1;
        int maxCount = 1;
        for(int x : stt){
            if(stt.find(x-1) == stt.end()){
                int i=1;
                while(stt.find(x+i) != stt.end()){
                    count++;
                    i++;
                }
                maxCount = max(maxCount , count);
                count = 1;
                i = 1;
            }

        }
        return maxCount;
    }
