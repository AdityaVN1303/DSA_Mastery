#include <bits/stdc++.h>
using namespace std;

// LeetCode 724 - Find Pivot Index

int pivotIndex(vector<int> &nums)
{
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    for (int l = 0; l < nums.size(); ++l)
    {
        rightSum -= nums[l];
        if (leftSum == rightSum)
            return l;
        leftSum += nums[l];
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << pivotIndex(nums) << endl;

    return 0;
}