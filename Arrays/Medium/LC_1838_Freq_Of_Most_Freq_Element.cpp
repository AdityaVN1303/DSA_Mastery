#include <bits/stdc++.h>
using namespace std;

// 1838. Frequency of the Most Frequent Element

int maxFrequency(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    int l = 0;
    int maxElem = 0;
    long long currentSum = 0;
    for (int r = 0; r < nums.size(); r++)
    {
        currentSum += nums[r];

        while (((long long)nums[r] * (r - l + 1)) - currentSum > k)
        {
            currentSum -= nums[l];
            l++;
        }

        maxElem = max(maxElem, r - l + 1);
    }
    return maxElem;
}

int main()
{
    vector<int> nums = {1, 2, 4};
    cout << maxFrequency(nums, 5) << endl;
    return 0;
}
