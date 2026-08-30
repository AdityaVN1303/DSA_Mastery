#include <bits/stdc++.h>
using namespace std;

// LC 88 - Merge Sorted Array

// Initially Came up with Auxilary Vector Solution (Taking O(N+M) Space)

// Two Pointers (Independent Pointers) + Merge Technique (From Merge Sort)
// Merge from the Back Using Two Pointers
// TC - O(N+M)
// SC - O(1)
// Trigger Hit ---> I can Start Merging Both from Back going till Front
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int itr = nums1.size();

    int i = m - 1;
    int j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums2[j] >= nums1[i])
        {
            nums1[--itr] = nums2[j--];
        }
        else
        {
            nums1[--itr] = nums1[i--];
        }
    }

    while (j >= 0)
    {
        nums1[--itr] = nums2[j--];
    }
}