#include <bits/stdc++.h>
using namespace std;

// LeetCode 26 - Remove Duplicates from Sorted Array

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    int j = 1;

    while (j < nums.size())
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << removeDuplicates(nums) << endl;

    return 0;
}