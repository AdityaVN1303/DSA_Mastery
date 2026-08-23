#include <bits/stdc++.h>
using namespace std;

// Armstrong Number
// TC - O(K^2) k = no. of digits
// SC - O(1)

// Using custom function to return a integer , not float value
long long power(int base, int exp)
{
    long long result = 1;
    for (int i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}

bool isArmstrong(int n)
{
    if (n < 0)
        return false;
    if (n == 0)
        return true;

    int digits = log10(n) + 1;

    if (digits == 1)
        return true; // Single digit numbers are Armstrong numbers

    int temp = n;
    long long sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    // Step 3: Compare sum with original number
    return sum == n;
}
