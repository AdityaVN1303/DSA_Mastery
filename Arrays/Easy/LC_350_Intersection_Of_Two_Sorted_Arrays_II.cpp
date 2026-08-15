#include <bits/stdc++.h>
using namespace std;

// LeetCode 350 - Intersection of 2 Arrays ||

// TC --- O(NlogN + MlogM)
// SC --- O(1)

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> nums;
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            nums.push_back(nums1[i]);
            ++i;
            ++j;
        }
        else if (nums1[i] > nums2[j])
            ++j;
        else
            ++i;
    }
    return nums;
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = intersect(nums1, nums2);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}