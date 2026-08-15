#include <bits/stdc++.h>
using namespace std;

// Intersection of Two Sorted Arrays

// Optimized Approach
// TC --- O(n1 + n2)
// SC --- O(1)

vector<int> intersection(vector<int> &v1, vector<int> &v2)
{
    vector<int> nums;
    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] == v2[j])
        {
            nums.push_back(v1[i]);
            ++i;
            ++j;
        }
        else if (v1[i] > v2[j])
            ++j;
        else
            ++i;
    }
    return nums;
}

int main()
{
    vector<int> v1 = {1, 2, 4, 5, 6};
    vector<int> v2 = {2, 3, 5, 7};

    vector<int> ans = intersection(v1, v2);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}