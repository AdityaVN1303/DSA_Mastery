#include <bits/stdc++.h>
using namespace std;

// Highest Occuring Element in an Array
// TC - O(n)
// SC - O(n)

// Approaches --->

// 1. Hashmap (OPTIMAL)
// Optimal Aproach
// O(N) TC
// O(N) SC

// 2. Sorting
// O(NlogN) TC
// O(1) SC

// 3. Nested Loops (Brute)
// O(N^2) TC
// O(1) SC

// Can be Solved with Hash Array based on Range of Input Elements

int highestOccurringElement(const vector<int> &nums)
{
    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int mostFrequentElement = nums[0];

    for (int num : nums)
    {
        freqMap[num]++;
        if (freqMap[num] > maxFreq)
        {
            maxFreq = freqMap[num];
            mostFrequentElement = num;
        }
    }

    return mostFrequentElement;
}