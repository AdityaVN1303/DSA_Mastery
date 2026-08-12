#include <bits/stdc++.h>
using namespace std;

void recursiveSelection(vector<int> &nums, int start)
{
    // >= Written to Handle Empty Vector Condition.
    if (start + 1 >= nums.size())
        return;

    int minimum = start;
    for (int i = start + 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[minimum])
        {
            minimum = i;
        }
    }
    if (minimum != start)
    {
        swap(nums[minimum], nums[start]);
    }
    recursiveSelection(nums, ++start);
}

int main()
{
    vector<int> nums = {1, 6, 5, 4, 5, 7, 3};
    recursiveSelection(nums, 0);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}