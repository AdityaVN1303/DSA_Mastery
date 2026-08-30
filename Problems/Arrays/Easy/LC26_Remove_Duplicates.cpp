#include<bits/stdc++.h> 
using namespace std;

// LC 26 - Remove Duplicares from Sorted Array 


// Slow and Fast Pointers -> (Read & Write) (Optimized)

// Improvement ---> I Tracked Element (Current) for Whose Duplicate is Getting Searched , But 'i' is tracking it by itself , so no need to use Extra Variable. 
// TC - O(N)
// SC - O(1)
int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); ++j){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }

// STL Unique Function
// TC - O(N)
// SC - O(1)
int removeDuplicates(vector<int>& nums){
    auto it = unique(nums.begin() , nums.end());
    return it - nums.begin();
}