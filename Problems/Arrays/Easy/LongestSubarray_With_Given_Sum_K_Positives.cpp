#include <bits/stdc++.h>
using namespace std;

// First Subarray with Sum Equals K (Positives) - GFG

// Can Also be Solved with PrefixSum + Hashmap or with Nested Loops

// Variable Sliding Window (Optimal)
// TC - O(N)
// SC - O(N)
int longestSubarray(vector<int> &nums, int k)
{
    int l = 0;
    int sum = 0;
    int longest = 0;
    for (int r = 0; r < nums.size(); ++r)
    {
        sum += nums[r];

        while (sum > k)
        {
            sum -= nums[l++];

            if (sum == k)
            {
                longest = max(longest, r - l + 1);
            }
        }

        if (sum == k)
        {
            longest = max(longest, r - l + 1);
        }
    }
    return longest;
}