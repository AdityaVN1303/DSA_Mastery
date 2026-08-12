#include <bits/stdc++.h>
using namespace std;

// LeetCode 414 - Third Maximum Number

int thirdMax(vector<int> &nums)
{
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;
    for (int x : nums)
    {
        if (x == first || x == second || x == third)
            continue;
        if (x > first)
        {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second)
        {
            third = second;
            second = x;
        }
        else if (x > third)
        {
            third = x;
        }
    }
    return third == LLONG_MIN ? first : third;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << thirdMax(nums) << endl;
    return 0;
}