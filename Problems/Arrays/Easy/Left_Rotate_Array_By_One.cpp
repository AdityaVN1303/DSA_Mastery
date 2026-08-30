#include <bits/stdc++.h>
using namespace std;

// Left Rotate Array by One

// Approaches

// Shift Elements by 1
// TC - O(N)
// SC - O(1)
void rotate(vector<int> &arr)
{
    int shift = arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; --i)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = shift;
}

// STL Rotate Function
// TC - O(N)
// SC - O(1)
void rotate(vector<int> &arr)
{
    std::rotate(arr.begin(), arr.end() - 1, arr.end());
}

// Using Cyclic Replacements
// TC - O(N)
// SC - O(1)
void rotate(vector<int> &arr)
{

    int count = 0;
    int n = arr.size();
    int i = 0;
    int j = 0;
    while (count < n)
    {
        j = i;
        int current = arr[j];
        do
        {
            int newPos = (j + 1) % n;
            int prev = arr[newPos];
            arr[newPos] = current;
            j = newPos;
            current = prev;
            count++;
        } while (i != j);
        i++;
    }
}