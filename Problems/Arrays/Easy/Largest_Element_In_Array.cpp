#include <bits/stdc++.h>
using namespace std;

// Largest Element in Array

// TC - O(N)
// SC - O(1)
int largest(vector<int>& nums)
{
    int largest = INT_MIN;
    for (int x : nums)
    {
        largest = max(x, largest);
    }
    return largest;
}