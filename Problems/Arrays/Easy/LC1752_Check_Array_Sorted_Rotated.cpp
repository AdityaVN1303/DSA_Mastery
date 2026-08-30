#include <bits/stdc++.h>
using namespace std;

// LC - 1752 - Check If Array is Sorted and Rotated

// Single Scan (Check for Drops) (Optimal)
// TC - O(N)
// SC - O(1)
// Observation ---> For Rotated Array , the Drop is Always == 1 , and for Array Not Rotated (Sorted Only) , drop == 0.
bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {

        if (nums[i] > nums[(i + 1) % n])
            count++;
    }
    return count <= 1;
}

// Double Array - Cyclic Traversal
// TC - O(2N)
// SC - O(1)
bool check(vector<int> &nums)
{
    int n = nums.size();
    int consecutive = 0;
    int itr = 0;
    int i = 0;

    if (nums.size() == 1)
        return true;
    while (itr < 2 * n)
    {
        int next = (i + 1) % n;
        if (nums[i] <= nums[next])
            consecutive++;
        else
            consecutive = 0;

        if (consecutive == n - 1)
            return true;
        i = next;
        itr++;
    }
    return false;
}

// Find Pivot then Check If Sorted
// TC - O(N)
// SC - O(1)
bool check(vector<int> &nums)
{
    int n = nums.size();
    int pivot = -1;
    for (int i = 0; i < n - 1; ++i)
    {
        if (nums[i] > nums[i + 1])
        {
            pivot = i + 1;
        }
    }

    if (pivot == -1)
        return true;

    int itr = 1;
    while (itr < n)
    {
        int next = (pivot + 1) % n;
        if (nums[pivot] > nums[next])
            return false;
        pivot = next;
        ++itr;
    }

    return true;
}