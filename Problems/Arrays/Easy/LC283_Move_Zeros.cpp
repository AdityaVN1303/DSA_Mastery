#include <bits/stdc++.h>
using namespace std;

// LC - 283 - Move Zeros

// STL remove function
// TC - O(N)
// SC - O(1)
// remove() does not gurantee last elements to be those which we have passed as argument.
void moveZeroes(vector<int> &nums)
{
    auto it = remove(nums.begin(), nums.end(), 0);
    int i = it - nums.begin();

    while (i < nums.size())
    {
        nums[i++] = 0;
    }
}

// Fast & Slow Pointers (One Pass)
// TC - O(N)
// SC - O(1)
void moveZeroes(vector<int> &nums)
{
    int i = -1;
    for (int j = 0; j < nums.size(); ++j)
    {
        if (nums[j] != 0)
        {
            swap(nums[++i], nums[j]);
        }
    }
}