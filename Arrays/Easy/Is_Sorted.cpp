#include <bits/stdc++.h>
using namespace std;

// Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

bool isSorted(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << isSorted(nums) << endl;

    return 0;
}