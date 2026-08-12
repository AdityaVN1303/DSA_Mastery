#include <bits/stdc++.h>
using namespace std;

// Given an array, we have to find the largest element in the array.

// Optimal
// TC --- O(N)
// SC --- O(1)
int largest1(vector<int> &nums)
{
    if (nums.empty())
        return -1;
    return *(max_element(nums.begin(), nums.end()));
}

// Brute
// TC --- O(NlogN)
// SC --- O(1)
int largest2(vector<int> nums)
{
    if (nums.empty())
        return -1;
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 1];
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << largest1(nums) << endl;
    cout << largest2(nums) << endl;
    return 0;
}