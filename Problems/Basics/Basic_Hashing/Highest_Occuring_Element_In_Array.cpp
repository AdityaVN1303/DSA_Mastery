#include <bits/stdc++.h>
using namespace std;

// Find the Number With Highest Frequency

// Approaches
// Sorting , Frequency Hashing (map) , Inplace Modulo Hashing

// Frequency Map - Hashing Approach
// TC - O(N)
// SC - O(N)
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
