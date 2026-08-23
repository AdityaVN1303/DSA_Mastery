#include <bits/stdc++.h>
using namespace std;

// Prime Number

// Approach 1 - Using Complete Iteration
// TC - O(n)
// SC - O(1)

// Approach 2 - Using Divisor Pair Method (OPTIMAL)
// TC - O(sqrt(n))
// SC - O(1)

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}