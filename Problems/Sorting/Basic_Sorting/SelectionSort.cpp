#include <bits/stdc++.h>
using namespace std;

// Selection Sort

// TC - O(n^2)
// SC - O(1)

// Selection Sort Better than Bubble Sort ---> Selection Sort Does 1 Swap Per Pass while Bubble Sort Does Multiple Swaps Per Pass

// Find Min/Max and Swap Once Per Iteration , Do n-1 Iteration , Smallest Element gets Placed at the Start

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
    }
}

// Recursive Version
// TC - Same
// SC - O(N)

void RSelectionSort(vector<int> &arr, int n, int start = 0)
{
    if (start == n - 1)
        return;

    int minIndex = start;

    for (int i = start + 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    swap(arr[start], arr[minIndex]);

    RSelectionSort(arr, n, start + 1);
}
