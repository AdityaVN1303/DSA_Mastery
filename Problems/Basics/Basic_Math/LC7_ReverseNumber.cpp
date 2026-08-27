#include <iostream>
#include <climits>
using namespace std;

// LC7 - Reverse Integer

// Approach 1 - Using String Conversion (Problem Dont Allow It)

// Approach 2 - Digit Manipulation 

// Issue - Overflow/Underflow Check Required for 32 bit signed Integer Range
// Solution - Overflow/Underflow: Check with INT_MAX/INT_MIN
// rev*10 + pop > INT_MAX
// Perform Equation Rearrangement for IF/Else Checking 

int reverse(int x)
{
    int rev = 0;

    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;

        // EXACT CHECKING with INT_MAX/INT_MIN

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