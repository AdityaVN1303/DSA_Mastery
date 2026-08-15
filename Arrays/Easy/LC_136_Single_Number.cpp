#include <bits/stdc++.h>
using namespace std;

// LeetCode 136 - Single Number

// Only Single Solution Possible --- using XOR
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

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums) << endl; // Output: 4
    return 0;
}