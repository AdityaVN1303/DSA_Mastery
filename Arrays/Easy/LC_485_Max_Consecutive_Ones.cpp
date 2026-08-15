#include <bits/stdc++.h>
using namespace std;

//  LeetCode 485 - Max Consecutive Ones

// TC - O(N)
// SC - O(1)

// Arithmetic Approach (Just for Code Optimization)

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int longest = 0;
    int streak = 0;
    for (int x : nums)
    {
        streak = (streak + 1) * x;
        longest = max(streak, longest);
    }
    return longest;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl; // Output: 3
    return 0;
}