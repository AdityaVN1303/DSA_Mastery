#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    // Here the Outer Loop Dictates inner loop from where to begin finding the min.
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[min] > nums[j])
            {
                min = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
}

int main()
{
    vector<int> v = {1, 3, 2, 5, 4, 5};
    selectionSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}