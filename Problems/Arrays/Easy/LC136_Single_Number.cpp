#include <bits/stdc++.h>
using namespace std;

// LC - 136 - Single Number

// Sorting , XOR , hashing (set , map)

// XOR Approach (Optimal)
// TC - O(N)
// SC - O(1)
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int x : nums)
    {
        ans ^= x;
    }
    return ans;
}

// Sorting + Linear Scan (Non Optimal)
// Observation - Array is always of Odd Length. (Useless Observation)
// TC - O(NlogN)
// SC - O(1)
int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i += 2)
    {
        if (nums[i] != nums[i + 1])
            return nums[i];
    }
    return nums[nums.size() - 1];
}

// Hashing - Set Approach (Non Optimal)
// TC - O(N)
// SC - O(N)
int singleNumber(vector<int> &nums)
{
    unordered_set<int> stt;

    for (int x : nums)
    {
        if (stt.find(x) == stt.end())
        {
            stt.insert(x);
        }
        else
        {
            stt.erase(x);
        }
    }
    return *stt.begin();
}

// Hashing - Map Approach (Non Optimal)
// TC - O(N)
// SC - O(N)
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> mpp;

    for (int x : nums)
    {
        mpp[x]++;
    }

    for (auto &[x, y] : mpp)
    {
        if (y == 1)
            return x;
    }

    return -1;
}