#include <bits/stdc++.h>
using namespace std;

// LeetCode 189 --- Rotate Array

// TC --- O(N)
// SC --- O(1)
// Optimal Approach

void rotate1(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

// Optimal Approach
// TC - O(N)
// SC - O(N-K) === O(N)

void rotate2(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    if (k == 0)
        return;

    vector<int> temp(nums.begin(), nums.begin() + (n - k));

    copy(nums.begin() + (n - k), nums.end(), nums.begin());

    copy(temp.begin(), temp.end(), nums.begin() + k);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate1(nums, k);
    for (int i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";
    return 0;
}