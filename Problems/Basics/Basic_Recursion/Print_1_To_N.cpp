#include <bits/stdc++.h>
using namespace std;

// Print 1 to N
// TC - O(n)
// SC - O(n) 

void printNumbers(int n)
{
    if (n <= 0)
    {
        return;
    }

    // Here Work is Happening while Coming UP the Tree
    printNumbers(n - 1);
    cout << n << endl;
}
