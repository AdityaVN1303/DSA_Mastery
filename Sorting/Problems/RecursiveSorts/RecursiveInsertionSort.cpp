#include <bits/stdc++.h>
using namespace std;

void recursiveInsert(vector<int> &nums, int start)
{
    if (start >= nums.size())
        return;

    int backPtr = start - 1;
    int currElem = nums[start];
    while (backPtr >= 0 && currElem < nums[backPtr])
    {
        nums[backPtr + 1] = nums[backPtr];
        --backPtr;
    }
    nums[backPtr + 1] = currElem;

    recursiveInsert(nums, ++start);
}

int main()
{
    vector<int> nums = {1, 6, 5, 4, 5, 7, 3};
    recursiveInsert(nums, 0);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}