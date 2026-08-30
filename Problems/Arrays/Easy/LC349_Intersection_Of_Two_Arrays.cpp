#include <bits/stdc++.h>
using namespace std;

// LC 349 Intersection of Two Sorted Arrays

// Using Merge (Independent Two Pointers Approach)
// TC - O((N+M)log(N + M))
// SC - O(1)
// Using Merge Sort merge() function logic
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
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
            while (i < nums1.size() && nums1[i] == val)
                i++;
            while (j < nums2.size() && nums2[j] == val)
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

// Hashing - Set Approach
// TC - O(N + M)
// SC - O(N + M)
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    unordered_set<int> stt(nums1.begin(), nums1.end());

    for (int x : nums2)
    {
        if (stt.find(x) != stt.end())
        {
            ans.push_back(x);
            // Using Erase to Make sure only Unique entries are pushed in ans.
            stt.erase(x);
        }
    }
    return ans;
}

// set_intersection STL Function
// TC - O(NlogN + MlogM)
// SC - O(1)
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
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

    // set_intersection also adds duplicate values
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}