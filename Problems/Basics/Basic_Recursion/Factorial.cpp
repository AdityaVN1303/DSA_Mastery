#include <bits/stdc++.h>
using namespace std;

// Factorial of a Number
// TC - O(n) 
// SC - O(n)

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}