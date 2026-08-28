#include <bits/stdc++.h>
using namespace std;

// Merge Sort

// Approach - Divide - Sort - Merge
// Split Into 2 Halves -> Recursively Sort Both Halves -> Merge the 2 Sorted Halves

// Approach 1 --- Using New Temporary Vector inside Every merge() call.

// TC - O(NlogN)
// SC - O(N)

void mergeA(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int i = low;
    int j = mid + 1;

    // Merge both sorted halves
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    // Remaining left half
    while (i <= mid)
        temp.push_back(arr[i++]);

    // Remaining right half
    while (j <= high)
        temp.push_back(arr[j++]);

    // Copy back to original array
    for (int k = low; k <= high; k++)
        arr[k] = temp[k - low];
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    // Optimization: skip merge if already sorted
    if (arr[mid] <= arr[mid + 1])
        return;

    mergeA(arr, low, mid, high);
}

// Approach 2 --- Using Reusable Temp Vector

void merge(vector<int> &arr, vector<int> &temp, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;

    // Merge two sorted halves
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Remaining elements from left half
    while (i <= mid)
        temp[k++] = arr[i++];

    // Remaining elements from right half
    while (j <= high)
        temp[k++] = arr[j++];

    // Copy merged range back
    for (int p = low; p <= high; p++)
        arr[p] = temp[p];
}

void mergeSort(vector<int> &arr, vector<int> &temp, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, temp, low, mid);
    mergeSort(arr, temp, mid + 1, high);

    // Optimization: already sorted
    if (arr[mid] <= arr[mid + 1])
        return;

    merge(arr, temp, low, mid, high);
}
