#include <bits/stdc++.h>
using namespace std;

// LC - 509 - Fibonacci Number
// TC - O(2^N)
// SC - O(N)  

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    // Draw Recursion Tree for Branching Recursion Problems for Better Understanding
    return fibonacci(n - 1) + fibonacci(n - 2);
}
