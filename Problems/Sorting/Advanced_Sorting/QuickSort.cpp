#include <bits/stdc++.h>
using namespace std;

// Sort Algorithm Uses Introsort
// Introsort = QuickSort (main Sorting Method) + HeapSort (Safety Net for Bad Recursion) + Insertion Sort (Small Ranges , Less Overhead)

// Quick Sort

// Ways to Implement Quick Sort

//  By Partition Scheme
// - Lomuto Partition (Easiest)
// - Hoare Partition (Efficient)
// - 3 Way Partition (Dutch National Flag) (Array consists of Multiple Duplicate Values)

// By Pivot Selection
// - First Element
// - Last Element
// - Middle Element
// - Random Element
// - Median of Three

// By Recursion Strategy
// - Normal Recursion
// - Tail Recursion (Optimized)

// Lomate Partition Approach (Pivot = Last Element)

// Logic - Partition the array around a pivot so that smaller elements go to the left and larger elements go to the right, placing the pivot in its final position

// Performed Using - Fast & Slow Pointers

// TC - O(NlogN) , Worst - O(n^2) (For already Sorted Array)
// SC - O(logN) Average , O(n) Worst (For already Sorted Array)

int LomutoPartition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Hoare Partition Approach (Pivot = First Element)

// Performed Using - Opposite End Pointers

// Logic - Choose a pivot, use two pointers from both ends, move them toward each other, and swap elements that are on the wrong side of the pivot.

// Hoare is Better than Lomuto ---> Performs Swaps Lesser compared to Lomuto.

// How Hoare Handles Duplicates Well ?
// Lomuto Checks arr[i] <= pivot , it pushes all duplicates to one side .
// // Hoare uses < and >, so elements equal to the pivot stop both pointers.
// // Hoare allows equal elements to stop both pointers, helping avoid highly unbalanced partitions caused by duplicates.
// Lomuto's <= condition can push duplicates to one side.

// TC - O(NlogN) , Worst - O(n^2) (For already Sorted Array)
// SC - O(logN) Average , O(n) Worst (For already Sorted Array)

int HoarePartition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];

    int i = low - 1;
    int j = high + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

// Hoare >> Lomuto :
// Hoare has Less Swaps than Lomuto
// Hoare Handles Duplicates well , while Lomuto might lead to O(n^2)

// How TC Calculated ?

// Levels = logn (At Each Level the array is split into have)
// At Each level , each partition scheme does N work
// Hence N x logn = O(NlogN)

// Worst Case Calculation --->

// If Array is already sorted , the tree becomes unbalanced
// This leads to approximately n levels - > Leads to ---> n x n = O(n^2)

void QuickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    // int p = LomutoPartition(arr, low, high);
    int p = HoarePartition(arr, low, high);

    // QuickSort(arr, low, p - 1); ---> For Lomuto
    QuickSort(arr, low, p);
    QuickSort(arr, p + 1, high);
}
