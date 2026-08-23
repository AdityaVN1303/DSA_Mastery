#include <bits/stdc++.h>
using namespace std;

// Print Name N Times
// TC - O(n) 
// SC - O(n)

void printName(int n, string name)
{
    if (n <= 0)
    {
        return;
    }

    // Doing Work Before/After Call doesn't matter
    cout << name << endl;
    printName(n - 1, name);
}
