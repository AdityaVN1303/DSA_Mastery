#include <bits/stdc++.h>
using namespace std;

// Insertion

// TC - O(n^2) in worst and average case, O(n) in best case (already sorted) (while loop never executes)
// SC - O(1)

// Insertion Sort Over Selection Sort --- Use Selection Sorts when Minimum Swaps Are required , else Go with Insertion Sort

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Recursive Version
// TC - Same
// SC - O(N)

// Way 1 - Doing Work While Coming Up the Tree
void insertionSort(vector<int> &arr, int n)
{
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    // Insert last element
    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

// Way 2 - Doing Work While Going Down the Tree
// Pass i = 1

void insertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
        return;

    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;

    insertionSort(arr, i + 1, n);
}