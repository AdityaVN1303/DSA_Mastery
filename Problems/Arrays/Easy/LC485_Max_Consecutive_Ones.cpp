#include <bits/stdc++.h>
using namespace std;

// LC - 485 - Max Consecutives Ones

// Single Pass Tracking
// TC - O(N)
// SC - O(1)
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxVal = 0;

    for (int x : nums)
    {
        if (x == 1)
            count++;
        else
        {
            maxVal = max(maxVal, count);
            count = 0;
        }
    }
    maxVal = max(count, maxVal);
    return maxVal;
}

// Custom Accumulator (Writing Custom Lambda Function)
// TC - O(N)
// SC - O(1)
int findMaxConsecutiveOnes(vector<int> &nums)
{
    // p.first = count
    // p.second = maxCount
    return accumulate(nums.begin(), nums.end(), pair<int, int>{0, 0}, [](pair<int, int> p, int x)
                      {
            if(x == 1) p.first++;
            else p.first = 0;
            p.second = max(p.first , p.second);

            return p; })
        .second;
}

// Sliding Window
// TC - O(N)
// SC - O(1)
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int l = 0;
    int maxCount = 0;
    for (int r = 0; r < nums.size(); ++r)
    {
        if (nums[r] == 0)
        {
            l = r + 1;
        }
        maxCount = max(maxCount, r - l + 1);
    }
    return maxCount;
}
