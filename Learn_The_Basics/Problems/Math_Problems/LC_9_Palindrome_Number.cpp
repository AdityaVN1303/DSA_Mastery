#include <bits/stdc++.h>
using namespace std;

// LeetCode 9 - Palindrome Number
bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf)
    {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return reversedHalf == x || reversedHalf / 10 == x;
}
// Problem Explanation --->
// Approach 1 - Reversing x and then comparing and returning.
// Issue to Approach 1 - Integer Overflow Error.
// Approach 2 - Reverse x till half then compare both and return.
// Inside while , x > reversedHalf, means we are reducing last digit of x and putting it into first digit of reversedHalf.
// Now , once half is reversed and x is converted to half, there can be 2 cases -
// If number is even , then its fine both can be compared directly.
// If number is odd , then the middle digit will be attached to reversedHald at the last.
// Hence we did reversedhald/10 == x , so that middle digit at last is removed.
// edge Cases -
// Case 1 - Negative Numbers - Returned False Earlier
// Case 2 (Important) - If Number is 10. Only that case is handled too. Dry run for insight.

int main()
{
    cout << isPalindrome(121);
    return 0;
}