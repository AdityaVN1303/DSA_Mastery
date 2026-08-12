#include <bits/stdc++.h>
using namespace std;

// Reverse an Array
void reverse(int i, int arr[], int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse(0, arr, sizeof(arr) / sizeof(arr[0]));
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}