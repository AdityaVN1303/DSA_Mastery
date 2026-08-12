#include <bits/stdc++.h>
using namespace std;

// LeetCode 509 - Fibonacci Number
int fibo(int n)
{
    // TC - O(2^N)
    // SC - O(N) (Depth is Measured)
    // Draw Recursion Tree for Approach
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    cout << fibo(6) << endl;
    return 0;
}