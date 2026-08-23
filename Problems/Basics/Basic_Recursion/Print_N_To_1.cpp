#include <bits/stdc++.h>
using namespace std;

// Print N to 1
// TC - O(n)
// SC - O(n)

void printNumbers(int n)
{
    if (n <= 0)
    {
        return;
    }

    // Here Work is Happening while Going Down the Tree
    cout << n << endl;
    printNumbers(n - 1);
}
