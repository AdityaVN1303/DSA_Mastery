#include <bits/stdc++.h>
using namespace std;

// LeetCode 53 - Maximum Subarray

// Brute Force Solution
// TC - O(N^2)
// SC - O(N)

int maxSubArray1(vector<int> &nums)
{
    // Prefix Sum Approach
    vector<int> prefix(nums.size());
    prefix[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
        prefix[i] = nums[i] + prefix[i - 1];
    }

    int maxVal = INT_MIN;

    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i; j < nums.size(); ++j)
        {
            if (i == 0)
                maxVal = max(maxVal, prefix[j]);
            else
                maxVal = max(maxVal, prefix[j] - prefix[i - 1]);
        }
    }

    return maxVal;
}

// Optimal Solution
// TC - O(N)
// SC - O(1)
int maxSubArray2(vector<int> &nums)
{
    int currSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); ++i)
    {
        // Either extend the previous subarray or start fresh at nums[i]
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray1(nums) << endl; // Output: 6
    cout << maxSubArray2(nums) << endl; // Output: 6
    return 0;
}