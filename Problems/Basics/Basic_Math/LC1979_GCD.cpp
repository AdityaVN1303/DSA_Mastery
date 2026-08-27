#include <bits/stdc++.h>
using namespace std;

// LC1979 - Find Greatest Common Divisor of Array

// Approach 1 - Descending Common Divisor Search (BRUTE)
// TC - O(n + min(a , b)))
// SC - O(1)
// Logic - Logic: Find the smaller number, then iterate from the smaller number down to 1, and return the first number that divides both numbers.

// Approach 2 - Using Euclidean Algorithm(Subtraction Version)
// TC - O(n + (max(a , b)))
// SC - O(1)
// Logic: Repeatedly subtract the smaller number from the larger until both numbers become equal. That value is the GCD.

int findGCDSubtraction(vector<int> &nums)
{
    int n = nums.size();
    int minNum = *min_element(nums.begin(), nums.end());
    int maxNum = *max_element(nums.begin(), nums.end());

    // Using Euclidean Algorithm (Subtraction Version)
    int a = maxNum;
    int b = minNum;

    // Start with 'a' as the Larger Number
    // b will become 0
    // By Swapping , a always remains greater number than b
    // Transformation - (a , b) = (b , a-b)

    while (b != 0)
    {
        int temp = b;
        b = a - b;
        a = temp;
    }

    return a;
}

// Approach 3 - Using Euclidean Algorithm (Modulus Version) (OPTIMAL)
// TC - O(n + log(min(a , b)))
// SC - O(1)
// Logic: Repeatedly replace the larger number with the remainder of the larger number divided by the smaller number until one of the numbers becomes zero. The other number is the GCD.

int findGCD(vector<int> &nums)
{
    int n = nums.size();
    int minNum = *min_element(nums.begin(), nums.end());
    int maxNum = *max_element(nums.begin(), nums.end());

    // Using Euclidean Algorithm (Modulus Version)
    int a = maxNum;
    int b = minNum;

    // Start with 'a' as the Larger Number
    // b will become 0
    // By Swapping , a always remains greater number than b
    // Transformation - (a , b) = (b , a%b)
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}