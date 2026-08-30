#include <bits/stdc++.h>
using namespace std;

// LC 645 - Set Mismatch

// Cyclic Sort
// TC - O(N)
// SC - O(1)
vector<int> findErrorNums(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
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
            return vector<int>{nums[i], i + 1};
        }
    }
    return vector<int>{-1, -1};
}

// Inplace Negation
// TC - O(N)
// SC - O(1)
vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); ++i)
    {
        int correct = abs(nums[i]) - 1;
        if (nums[correct] > 0)
        {
            nums[correct] = -nums[correct];
        }
        else
        {
            ans.push_back(abs(nums[i]));
        }
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}