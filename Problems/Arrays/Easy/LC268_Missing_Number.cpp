#include <bits/stdc++.h>
using namespace std;

// LC 268 - Missing Number

// Can also be solved using sorting and hashing Also 

// Cyclic Sort (Optimal)
// TC - O(N)
// SC - O(1)
// Trigger ---> Range Is Given
// Issue ---> Knew Cyclic Sort , but Forogt The Implementation in Code. 
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        int correct = nums[i];
        if (nums[i] >= 0 && nums[i] < n && nums[i] != nums[correct])
        {
            swap(nums[i], nums[correct]);
        }
        else
        {
            ++i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != i)
            return i;
    }
    return n;
}


// Math Formula (Sum of N Natural Numbers) Applied
// TC - O(N)
// SC - O(1)
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int full = n*(n+1)/2;
        int total = accumulate(nums.begin() , nums.end() , 0);

        return full - total;
    }

// XOR Approach 
int missingNumber(vector<int>& nums) {
        int fullRange = 0;
        int currentRange = 0;
        for(int i=0; i<nums.size(); ++i){
            fullRange ^= i;
            currentRange ^= nums[i];
        }
        fullRange ^= nums.size();
        return fullRange ^ currentRange;
    }

