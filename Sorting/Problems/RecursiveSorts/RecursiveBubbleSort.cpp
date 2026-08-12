#include <bits/stdc++.h>
using namespace std;

void recursiveBubble(vector<int> &nums, int n)
{
    if (n == 1)
        return;
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            swap(nums[i], nums[i + 1]);
            swapped = true;
        }
    }
    if (swapped == false)
        return;
    recursiveBubble(nums, --n);
}

int main()
{
    vector<int> nums = {1, 6, 5, 4, 5, 7, 3};
    recursiveBubble(nums, nums.size());

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}