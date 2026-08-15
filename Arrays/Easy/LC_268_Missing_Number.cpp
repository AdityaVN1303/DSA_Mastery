#include <bits/stdc++.h>
using namespace std;

// LeetCode 268 - Missing Number
// Bit Manipulation - XOR Approach
// Most Optimized.

int missingNumber(vector<int> &nums)
{

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        xor1 ^= i + 1;
        xor2 ^= nums[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl; // Output: 2
    return 0;
}