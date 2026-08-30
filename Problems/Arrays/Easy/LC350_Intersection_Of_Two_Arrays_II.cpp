#include <bits/stdc++.h>
using namespace std;

// Intersection of Two Sorted Arrays II

// Using Merge (Independent Two Pointers Approach)
// TC - O(N + M)
// SC - O(N + M)
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            int val = nums1[i];
            ans.push_back(val);
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
        {
            ++j;
        }
        else
        {
            ++i;
        }
    }
    return ans;
}

// Hashing - Map Approach for Duplicates
// TC - O(N + M)
// SC - O(N + M)
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    unordered_map<int, int> mpp;

    for (int x : nums1)
    {
        mpp[x]++;
    }

    for (int x : nums2)
    {
        if (mpp[x] > 0)
        {
            ans.push_back(x);
            mpp[x]--;
        }
    }

    return ans;
}

// set_intersection STL Function
// TC - O(NlogN + MlogM)
// SC - O(1)
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    // Requires sorted arrays for intersection
    set_intersection(
        nums1.begin(), nums1.end(),
        nums2.begin(), nums2.end(),

        // Using back_inserter to append to an empty vector
        back_inserter(ans));

    return ans;
}
