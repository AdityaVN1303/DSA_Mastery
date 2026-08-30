#include <bits/stdc++.h>
using namespace std;

// LC - 414 - Third Maximum Number

// Single Pass Scan (Maintain 3 Variables) (Optimal)
// TC - O(N)
// SC - O(1)
int thirdMax(vector<int> &nums)
{
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > first)
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second && nums[i] != first)
        {
            third = second;
            second = nums[i];
        }
        else if (nums[i] > third && nums[i] != second && nums[i] != first)
        {
            third = nums[i];
        }
    }
    return third != LLONG_MIN ? third : first;
}

// Ordered Set (Return third last element from set)
// TC - O(NlogN)
// SC - O(N)
int thirdMax(vector<int> &nums)
{
    set<int> stt;

    for (int x : nums)
    {
        stt.insert(x);

        if (stt.size() > 3)
        {
            stt.erase(stt.begin());
        }
    }

    if (stt.size() == 3)
        return *stt.begin();
    else
        return *stt.rbegin();
}

// Sorting + Remove Duplicates
// TC - O(NlogN)
// SC - O(1)
int thirdMax(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    if (nums.size() < 3)
        return *nums.rbegin();
    else
    {
        auto itr = nums.rbegin() + 2;
        return *itr;
    }
}