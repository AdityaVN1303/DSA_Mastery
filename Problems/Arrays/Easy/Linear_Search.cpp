#include <bits/stdc++.h>
using namespace std;

// Linear Search
// Single Linear Traversal
// TC - O(N)
// Sc - O(1)
int linearSearch(vector<int> &nums, int x)
{
    auto itr = find(nums.begin(), nums.end(), x);
    if (itr == nums.end())
        return -1;
    return itr - nums.begin();
}

int linearSearch(vector<int> &nums, int x)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == x)
            return i;
    }
    return -1;
}
