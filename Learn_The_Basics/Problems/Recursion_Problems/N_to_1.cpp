#include <bits/stdc++.h>
using namespace std;

// Print Numbers from N to 1 using recursion
void PrintReverseNums(int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    PrintReverseNums(n - 1);
}

int main()
{
    int n = 5;
    PrintReverseNums(n);
    return 0;
}