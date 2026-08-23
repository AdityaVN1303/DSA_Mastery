#include <bits/stdc++.h>
using namespace std;

// Reverse An Array
// TC - O(n) 
// SC - O(n)

void reverseArray(vector<int> &arr, int start)
{
    if (start >= arr.size() - start - 1)
        return;

    // Work Happens While Going Down the Tree
    swap(arr[start], arr[arr.size() - start - 1]);
    reverseArray(arr, start + 1);
}
