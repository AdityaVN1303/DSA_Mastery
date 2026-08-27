#include <bits/stdc++.h>
using namespace std;

// Bubble Sort

// TC - O(n^2) in worst and average case, O(n) in best case(already/nearly sorted) (bool swapped Logic Used)
// SC - O(1)

// Swap Adjacent Elements Repeatedly Per Iteration, Do N-1 Iterations , For Each Iteration , Largest Number Bubbles at the Back

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // No swaps → already sorted
        if (!swapped)
            break;
    }
}

// Recursive Version
// TC - Same
// SC - O(N)

void RBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    bool swapped = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

    if (!swapped)
        return;

    RBubbleSort(arr, n - 1);
}
