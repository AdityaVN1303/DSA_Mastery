#include <bits/stdc++.h>
using namespace std;

// LeetCode 1752 --- Check if Array is Sorted and Rotated

bool check(vector<int> &nums)
{
    int fall = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > nums[(i + 1) % nums.size()])
            ++fall;
    }
    return fall <= 1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << check(nums) << endl;
    return 0;
}