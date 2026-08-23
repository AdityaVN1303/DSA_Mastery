#include <bits/stdc++.h>
using namespace std;

// Approaches

// Approach 1 - Using Digit Extraction 
// TC - O(K) 
// SC - O(1)
int countDigits(int n)
{
    if (n == 0)
        return 1;

    int count = 0;
    n = abs(n); // Handle negative numbers
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

// Approach 2 - Using Logarithmic Function (OPTIMAL)
// TC - O(1)
// SC - O(1)
int optimizedCount(int n)
{
    if (n == 0)
        return 1;
    return floor(log10(abs(n))) + 1;
}
