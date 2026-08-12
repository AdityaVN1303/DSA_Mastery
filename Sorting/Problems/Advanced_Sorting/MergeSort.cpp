#include <bits/stdc++.h>
using namespace std;

void Compare(vector<int> &nums, vector<int> &vec, int ls, int le, int rs, int re)
{

    int idx = ls;
    int left = ls;
    int right = rs;
    while (left <= le && right <= re)
    {
        if (nums[left] <= nums[right])
        {
            vec[idx++] = nums[left++];
        }
        else
        {
            vec[idx++] = nums[right++];
        }
    }

    while (left <= le)
    {
        vec[idx++] = nums[left++];
    }

    while (right <= re)
    {
        vec[idx++] = nums[right++];
    }

    for (int i = ls; i <= re; ++i)
    {
        nums[i] = vec[i];
    }
}

void mergeSort(vector<int> &nums, vector<int> &vec, int i, int j)
{
    if (i >= j)
    {
        return;
    }

    int mid = i + (j - i) / 2;
    mergeSort(nums, vec, i, mid);
    mergeSort(nums, vec, mid + 1, j);
    if (nums[mid] <= nums[mid + 1])
    {
        return;
    }
    Compare(nums, vec, i, mid, mid + 1, j);
}

int main()
{
    vector<int> nums = {3, 2, 1, 3, 5, 4, 5, 1};
    vector<int> vec(nums.size());
    mergeSort(nums, vec, 0, (int)nums.size() - 1);

    for (int &num : nums)
    {
        cout << num << " ";
    }

    return 0;
}