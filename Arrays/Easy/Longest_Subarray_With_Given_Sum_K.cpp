#include <bits/stdc++.h>
using namespace std;

// Longest Subarray with given Sum K(Positives)
// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

int longestSubArrayWithSumK1(vector<int> &nums, int k)
{
    int l = 0;
    int sum = 0;
    int longest = 0;
    for (int r = 0; r < nums.size(); ++r)
    {
        sum += nums[r];
        while (sum > k && l <= r)
        {
            sum -= nums[l++];
        }
        if (sum == k)
            longest = max(longest, r - l + 1);
    }
    return longest;
}

// Works for Positives , Negatives , Zeros
int longestSubarrayWithSumK2(vector<int> &nums, int k)
{
    int longest = 0;
    for (int i = 0; i < (int)nums.size(); i++)
    {
        long long sum = 0;
        for (int j = i; j < (int)nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
                longest = max(longest, j - i + 1);
        }
    }
    return longest;
}

// Optimized Approach
// O(N) Average/Best
// O(N^2) Worst Case in case of hash collision in unordered_map
// O(NlogN) if map is used.

// Works for Positives , Negatives , Zeros

int longestSubarrayWithSumK3(vector<int> &nums, int k)
{
    unordered_map<int, int> mpp;
    int longest = 0;
    int currSum = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        currSum += nums[i];
        if (currSum == k)
            longest = i + 1;

        if (mpp.find(currSum) == mpp.end())
            mpp[currSum] = i;

        int target = currSum - k;
        if (mpp.find(target) != mpp.end())
            longest = max(longest, i - mpp[target]);
    }
    return longest;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 9;
    cout << longestSubArrayWithSumK1(nums, k) << endl;
    cout << longestSubarrayWithSumK2(nums, k) << endl;
    cout << longestSubarrayWithSumK3(nums, k) << endl;
    return 0;
}