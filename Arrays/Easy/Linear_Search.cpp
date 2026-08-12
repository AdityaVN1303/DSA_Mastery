#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int x)
{
    if (nums.empty())
        return -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << linearSearch(nums, 3) << endl;

    return 0;
}