#include <bits/stdc++.h>
using namespace std;

// Print Numbers from 1 to N using recursion
void PrintNums(int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (n == 1)
    {
        cout << n << " ";
        return;
    }

    PrintNums(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 5;
    PrintNums(n);
    return 0;
}