#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums)
{
    // here the outer loop denotes number of iterations & tells the Inner Loop till where to go.
    // Here swapping is happening at every iteration , unlike selection sort where swapping happens once per inner loop.
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> v = {1, 3, 2, 5, 4, 5};
    bubbleSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}