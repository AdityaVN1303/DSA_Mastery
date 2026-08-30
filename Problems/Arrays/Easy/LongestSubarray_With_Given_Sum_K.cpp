#include <bits/stdc++.h>
using namespace std;

// Longest Subarray with Given Sum K (All) - GFG

// Can also be solved with Nested Loops

// Prefix Sum + Hashmap (Optimal)
// TC - O(N)
// SC - O(N)
int longestSubarray(vector<int> &arr, int k)
{
    unordered_map<int, int> prefix;

    int sum = 0;
    int longest = 0;
    prefix[0] = -1;
    for (int i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];

        int compliment = sum - k;

        if (prefix.find(compliment) != prefix.end())
        {
            longest = max(longest, i - prefix[compliment]);
        }

        if (prefix.find(sum) == prefix.end())
        {
            prefix[sum] = i;
        }
    }
    return longest;
}
