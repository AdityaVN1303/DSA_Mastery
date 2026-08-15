#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

int findMissing(vector<int> nums)
{
    int n = nums.size() + 1;
    int total = accumulate(nums.begin(), nums.end(), 0);
    long long full = (n * (n + 1)) / 2;

    return full - total;
}

int main()
{
    vector<int> nums = {8, 2, 4, 5, 3, 7, 1};
    cout << findMissing(nums) << endl;

    return 0;
}