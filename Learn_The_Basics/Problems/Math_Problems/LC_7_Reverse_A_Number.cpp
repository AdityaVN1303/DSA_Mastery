#include <bits/stdc++.h>
using namespace std;

// LeetCode 7 - Reverse Integer
int reverse(int x)
{
    // Handles Removal of Trailing o's
    // Handles Negative Integers
    // Handles Overflowing of int over 32 bits.

    int reversedVal = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (reversedVal > INT_MAX / 10 || (reversedVal == INT_MAX / 10 && pop > 7))
        {
            return 0;
        }

        if (reversedVal < INT_MIN / 10 || (reversedVal == INT_MIN / 10 && pop < -8))
        {
            return 0;
        }

        reversedVal = reversedVal * 10 + pop;
    }
    return reversedVal;
}
// Problem Explanation --->
// Problem States ---> Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
// INT_MAX: 2,147,483,647 (ends in 7)
// INT_MIN: -2,147,483,648 (ends in 8)
// Above are the Upper Limits. These are handled in the Code.

int main()
{
    cout << reverse(123);
    return 0;
}