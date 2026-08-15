#include <bits/stdc++.h>
using namespace std;

// LeetCode 349 - Intersection of 2 Arrays

// TC --- O(NlogN + MlogM)
// SC --- O(1)

vector<int> intersection1(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    nums1.erase(std::unique(nums1.begin(), nums1.end()), nums1.end());
    nums2.erase(std::unique(nums2.begin(), nums2.end()), nums2.end());
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

// Approach 2 ---

// TC --- Average O(N+M) , Worst O(N^2 + NxM)
// Sc --- O(N)

vector<int> intersection2(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set1(nums1.begin(), nums1.end());
    vector<int> res;
    for (int x : nums2)
    {
        if (set1.erase(x))
        { // erase returns 1 if found and removes it (prevents duplicate adds)
            res.push_back(x);
        }
    }
    return res;
}

int main()
{
    vector<int> v1 = {1, 2, 4, 5, 6};
    vector<int> v2 = {2, 3, 5, 7};

    vector<int> ans = intersection1(v1, v2);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}