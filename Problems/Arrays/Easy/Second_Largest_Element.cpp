#include <bits/stdc++.h>
using namespace std;

// Second Largest Element in Array

// Approaches

// Single Pass Scan (Maintain first & second) (Optimal)
// TC - O(N)
// SC - O(1)

// Taking Only Positive Elements (I was Lazy tbh...)

// Can be solved by all approaches we used for finding Third Maximum Number

int getSecondLargest(vector<int> &arr)
{

    int first = 0;
    int second = 0;

    for (int x : arr)
    {
        if (x > first)
        {
            second = first;
            first = x;
        }
        else if (x > second && x != first)
        {
            second = x;
        }
    }

    return second == 0 ? -1 : second;
}