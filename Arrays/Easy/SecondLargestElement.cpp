#include <bits/stdc++.h>
using namespace std;

// Second Largest Number in array of positive integers

// Optimal 1
// TC --- O(N)
// SC --- O(1)
int secondLargest1(vector<int> &nums)
{
    if (nums.empty())
        return -1;

    int largest = nums[0];
    int secondLargest = -1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] > secondLargest && nums[i] < largest)
        {
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}

// Optimal 2
// TC --- O(N)
// SC --- O(1)
int secondLargest2(vector<int> &nums)
{
    if (nums.empty())
        return -1;
    int largest = -1;
    for (int x : nums)
        largest = *(max_element(nums.begin(), nums.end()));

    int secondLargest = -1;
    for (int x : nums)
    {
        if (x > secondLargest && x != largest)
            secondLargest = x;
    }

    return secondLargest;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << secondLargest1(nums) << endl;
    cout << secondLargest2(nums) << endl;
    return 0;
}