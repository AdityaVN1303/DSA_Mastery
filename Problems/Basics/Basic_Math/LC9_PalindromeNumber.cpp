#include <bits/stdc++.h>
using namespace std;

// LC9 - Palindrome Number

// Approach 1 - Using String Conversion
// TC - O(k)
// SC - O(k)
// Issue - Not Allowed by the problem statement

// Approach 2 - Digit Extraction + Number Reversal (OPTIMAL)
// TC - O(k)
// SC - O(1)

// Issue - Reversing Full Number causes overflow/underflow
// Solution - Reverse only half digits to avoid overflow/underflow issues. Compare the first half with the reversed second half.

bool isPalindrome(int x)
{
    // Edge Case - If Number is Multiple of 10, handle Before , Because reverse number loses trailing 0's and hence given logic returns true for numbers like 10, 100, 1000 etc. which are not palindromes.
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reversedHalf = 0;
    // Reverse only the second half of the number
    while (x > reversedHalf)
    {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // For even-length numbers: x == reversedHalf (e.g., 1221 -> x=12, reversedHalf=12)
    // For odd-length numbers: x == reversedHalf / 10 (e.g., 12321 -> x=12, reversedHalf=123)
    return x == reversedHalf || x == reversedHalf / 10;
}