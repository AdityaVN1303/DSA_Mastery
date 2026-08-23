#include <bits/stdc++.h>
using namespace std;

// Sum of First N Numbers
// TC - O(n)
// SC - O(n)

int sumOfFirstNNumbers(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sumOfFirstNNumbers(n - 1);
}
