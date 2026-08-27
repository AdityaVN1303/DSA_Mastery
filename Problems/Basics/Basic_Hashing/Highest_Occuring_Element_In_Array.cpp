#include <bits/stdc++.h>
using namespace std;

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
