#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, rotate the array to the left by one.

// Approach 1
void LeftRotateByOne1(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;
    reverse(nums.begin() + 1, nums.end());
    reverse(nums.begin(), nums.end());
}
// Approach 2
void LeftRotateByOne2(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;

    int num = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[nums.size() - 1] = num;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    LeftRotateByOne1(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}