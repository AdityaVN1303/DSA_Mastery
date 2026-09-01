// LC - 175 - Sort Colors

// Can also be solved using sorting (not allowed) , hashing

// Dutch National Flag (Optimal)
// TC - O(N)
// SC - O(1)
void sortColors(vector<int>& nums) {
        int low = -1;
        int mid = 0;
        int high = nums.size();
        while(mid < high){
            if(nums[mid] == 0){
                swap(nums[++low] , nums[mid]);
                mid++;   
            }
            else if(nums[mid] == 2){
                swap(nums[--high] , nums[mid]);
            }
            else{
                mid++;
            }
        }
    }

// Counting Sort
// TC - O(2N)
// SC - O(1)
void sortColors(vector<int>& nums) {
        int count[3] = {0};

        for(int i=0; i<nums.size(); ++i){
            count[nums[i]]++;
        }

        int idx = 0;
        for(int itr = 0; itr<3; itr++){
            while(count[itr] != 0){
                nums[idx++] = itr;
                count[itr]--;
            }
        }
    }
