#include <bits/stdc++.h>
using namespace std;

// LC 448 - Find All Numbers Disappeared in an Array

// Can also be solved with hashing

// Sorting + Deduplication
// TC - O(NlogN)
// SC - O(1)
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    vector<int> ans;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int itr = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i != nums[itr])
        {
            ans.push_back(i);
        }
        else
        {
            itr++;
        }
    }
    return ans;
}

// Cyclic Sort (Optimal)
// TC- O(N)
// SC - O(1)
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    vector<int> ans;
    while (i < n)
    {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct])
        {
            swap(nums[i], nums[correct]);
        }
        else
        {
            ++i;
        }
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != i + 1)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}

// Inplace Negation
// TC - O(N)
// SC - O(1)
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < nums.size(); ++i)
    {
        int correct = abs(nums[i]) - 1;
        if (nums[correct] < 0)
            continue;
        nums[correct] = -nums[correct];
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
            ans.push_back(i + 1);
    }
    return ans;
}
