#include <bits/stdc++.h>
using namespace std;

// LeetCode - 283 - Move Zeros

// TC - O(N)
// SC - O(1)
void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int r = 0; r < nums.size(); ++r)
    {
        if (nums[r] != 0)
        {
            swap(nums[i], nums[r]);
            ++i;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";
    return 0;
}