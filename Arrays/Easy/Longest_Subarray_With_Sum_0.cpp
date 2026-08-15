#include <bits/stdc++.h>
using namespace std;

// Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.

// Brute Force Approach
// O(n^2) TC
// O(1) SC
int longestSubarrayWithZeroSum1(vector<int> &nums)
{
    int longest = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); ++j)
        {
            sum += nums[j];
            if (sum == 0)
                longest = max(longest, j - i + 1);
        }
    }
    return longest;
}

// Optimal Approach
// TC - O(N) Average/Best , O(N^2) Worst (Rare)
// SC - O(N) due to map usage.
int longestSubarrayWithZeroSum2(vector<int> &nums)
{
    int longest = 0;
    unordered_map<int, int> mpp;
    int currSum = 0;
    mpp[0] = -1;
    for (int i = 0; i < (int)nums.size(); ++i)
    {
        currSum += nums[i];
        bool isThere = mpp.find(currSum) != mpp.end();
        if (isThere)
        {
            longest = max(longest, i - mpp[currSum]);
        }
        else
        {
            mpp[currSum] = i;
        }
    }
    return longest;
}

int main()
{
    vector<int> nums = {1, 2, -3, 3, 1, -4, 2, 2};
    cout << longestSubarrayWithZeroSum1(nums) << endl;
    cout << longestSubarrayWithZeroSum2(nums) << endl;
    return 0;
}