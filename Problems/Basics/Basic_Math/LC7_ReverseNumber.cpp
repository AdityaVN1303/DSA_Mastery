#include <iostream>
#include <climits>
using namespace std;

// LC7 - Reverse Integer


// Approach 1 - Using String Conversion
// TC - O(k)
// SC - O(k)
// Issue - Not Allowed by the problem statement

// Approach 2 - Digit Extraction + Number Reversal (OPTIMAL)
// TC - O(k)
// SC - O(1)

// Issue - Overflow/Underflow Check Required for 32 bit signed Integer Range
// Solution - Overflow/Underflow: Before rev = rev × 10 + digit, check whether rev would exceed INT_MAX or INT_MIN. If yes, return 0.

int reverse(int x)
{
    int rev = 0;

    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;

        // Overflow check for INT_MAX (2,147,483,647)
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
        {
            return 0;
        }
        // Underflow check for INT_MIN (-2,147,483,648)
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
        {
            return 0;
        }

        rev = rev * 10 + pop;
    }

    return rev;
}