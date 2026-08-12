#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int currElem = nums[i];
        int reverseIdx = i - 1;
        while (reverseIdx >= 0 && currElem < nums[reverseIdx])
        {
            nums[reverseIdx + 1] = nums[reverseIdx];
            reverseIdx--;
        }
        nums[reverseIdx + 1] = currElem;
    }
}

int main()
{
    vector<int> v = {1, 3, 2, 5, 4, 5};
    insertionSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}