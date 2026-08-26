#include <bits/stdc++.h>
using namespace std;

// Use Directly For Range [1 , n] or [0 , n] , Directly Use Cyclic Sort
// TC - O(N)
// SC - O(1)

// For range [1 , n]
void CyclicSort(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    while(i < n){
        int correct = nums[i] - 1;

            if(nums[i] >= 1 && nums[i] <= n && nums[i] != nums[correct]){
                swap(nums[i] , nums[correct]);
            }
            else{
                ++i;
            }
    }
}

// For range [0 , n]
void CyclicSort2(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    while(i < n){
        int correct = nums[i];

            if(nums[i] >= 0 && nums[i] < n && nums[i] != nums[correct]){
                swap(nums[i] , nums[correct]);
            }
            else{
                ++i;
            }
    }
}
