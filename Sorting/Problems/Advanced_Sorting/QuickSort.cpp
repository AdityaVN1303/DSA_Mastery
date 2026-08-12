// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// Using Hoare's Parition Scheme (Two Pointers Technique)
// Can Also Use Dutch National Flag (For Duplicates Optimized)
// Lomuto's Partition Scheme (Single Direction Scanning)

int partition(vector<int> &nums, int low, int high)
{
    int i = low + 1;
    int j = high;
    // Selecting First Element as Pivot
    while (i <= j)
    {
        while (i <= high && nums[low] >= nums[i])
            i++;
        while (j >= low + 1 && nums[low] < nums[j])
            j--;
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

int partition2(vector<int> &nums, int low, int high)
{
    int i = low;
    int j = high - 1;
    // Selecting Last Element as Pivot
    while (i <= j)
    {
        while (i <= high - 1 && nums[high] >= nums[i])
            i++;
        while (j >= low && nums[high] < nums[j])
            j--;
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[high], nums[i]);
    return i;
}

void quickSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int pivotIdx = partition2(nums, low, high);

    quickSort(nums, low, pivotIdx - 1);
    quickSort(nums, pivotIdx + 1, high);
}

int main()
{
    vector<int> nums = {3, 2, 1, 3, 5, 4, 5, 10};
    quickSort(nums, 0, (int)nums.size() - 1);

    for (int &num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
