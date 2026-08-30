#include <bits/stdc++.h>
using namespace std;

// First Subarray with Sum Equals K (Positives) - GFG

// Can be Solved using Hashing + Prefix Sum

// Variable Sliding Window
// TC - O(N)
// SC - O(1)
vector<int> subarraySum(vector<int> &arr, int target)
{

    int l = 0;
    int sum = 0;
    for (int r = 0; r < arr.size(); ++r)
    {
        sum += arr[r];

        while (sum > target)
        {
            sum -= arr[l++];
            if (sum == target)
            {
                return vector<int>{l + 1, r + 1};
            }
        }
        if (sum == target)
        {
            return vector<int>{l + 1, r + 1};
        }
    }
    return vector<int>{-1};
}
