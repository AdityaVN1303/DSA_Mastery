#include <bits/stdc++.h>
using namespace std;

// LC 189 - Rotate Array

// STL Reverse Function) (Optimal)
// TC - O(N)
// SC - O(1)
void rotate(vector<int> &nums, int k)
{
    // Because after n rotations , we get exact same array.
    k %= nums.size();

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

// Cyclic Replacement (Optimal)
// TC - O(N)
// SC - O(1)
// Logic Derived By Self , Issue in Implementation of Code.
void rotate(vector<int> &nums, int k)
{

    int n = nums.size();
    k %= n;
    int i = 0;
    int count = 0;

    while (count < n)
    {
        int j = i;
        int current = nums[j];
        do
        {
            int nextPos = (j + k) % n;
            int newElem = nums[nextPos];
            nums[nextPos] = current;
            current = newElem;
            j = nextPos;
            count++;
        } while (i != j);
        i++;
    }
}
