#include <bits/stdc++.h>
using namespace std;

// Minimum Cost to Make Array 1 ---> GFG

// My Approach
// TC - O(NlogN)
// SC - O(1)
// Used Sorting + Two Pointers (Opposite Ends)
// Smart Move ---> Not Actually Modifying the Array
int cost(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int i = 0;
    int j = arr.size() - 1;

    int operations = 0;
    while (i < j)
    {
        operations += min(arr[i], arr[j]);
        if (arr[i] > arr[j])
        {
            // Never Happens Because for Sorted array , nums[0] is smallest and smallest stays till the end
            i++;
        }
        else
        {
            j--;
        }
    }
    return operations;
}

// Observation Missed ---> Minimum Element Will Always Stay the Same till the End
// TC - O(N)
int cost(vector<int> &arr)
{
    int minElement = *(min_element(arr.begin(), arr.end()));
    return minElement * (arr.size() - 1);
}