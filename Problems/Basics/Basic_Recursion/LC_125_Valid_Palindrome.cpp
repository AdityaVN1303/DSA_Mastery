#include <bits/stdc++.h>
using namespace std;

// LC - 125 - Valid Palindrome
// TC - O(n) 
// SC - O(n) 

bool check(string &s, int i, int j)
{
    if (i >= j)
        return true;

    // Skip non-alphanumeric characters
    if (!isalnum(s[i]))
        return check(s, i + 1, j);

    if (!isalnum(s[j]))
        return check(s, i, j - 1);

    // Compare after converting to lowercase
    if (tolower(s[i]) != tolower(s[j]))
        return false;

    // Move both pointers inward
    return check(s, i + 1, j - 1);
}