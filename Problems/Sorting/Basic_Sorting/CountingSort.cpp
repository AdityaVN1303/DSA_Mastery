#include <bits/stdc++.h>
using namespace std;

// Works for Small & Known Ranges 
// Gives Sorting in TC - O(N + K) and SC - O(K)

// For Positives 
void CountingSort(vector<int>& nums){
    if(nums.empty()) return;

    int maxVal = *(max_element(nums.begin() , nums.end()));
    vector<int> count(maxVal+1);
    
    for(int x : nums){
        count[x]++;
    }

    int itr = 0;
    for(int i=0; i<count.size(); ++i){
        while(count[i]--){
            nums[itr++] = i;
        }
    }
}

// For All 
void CountingSort2(vector<int>& nums){
    if(nums.empty()) return; 
    
    int minVal = *(min_element(nums.begin() , nums.end()));
    int maxVal = *(max_element(nums.begin() , nums.end()));
    vector<int> count(maxVal-minVal+1);
    
    for(int x : nums){
        count[x - minVal]++;
    }

    int itr = 0;
    for(int i=0; i<count.size(); ++i){
        while(count[i]--){
            nums[itr++] = minVal + i;
        }
    }
}
