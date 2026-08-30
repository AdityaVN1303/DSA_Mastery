#include <bits/stdc++.h>
using namespace std;

// LC 560 - Subarray Sum Equals K

// Can Also Be Solved using Brute Force Nested Loops in O(N^2) TC

// Prefix Sum + Hashmap
// TC - O(N) , Worst = O(N^2)
// SC - O(1)
int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> prefix;

    int count = 0;
    prefix[0]++;
    int sum = 0;
    for (int x : nums)
    {
        sum += x;
        int compliment = sum - k;
        if (prefix.find(compliment) != prefix.end())
        {
            count += prefix[compliment];
        }

        prefix[sum]++;
    }
    return count;
}
