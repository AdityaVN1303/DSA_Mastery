#include <bits/stdc++.h>
using namespace std;

// LeetCode 125 - Valid Palindrome
bool palindrome(string &s, int i, int j)
{
    // TC - O(N)
    // SC - O(N)

    // Handles upper and lower case characters , handles non alphanumeric characters.

    if (i >= j)
    {
        return true;
    }

    unsigned char l = s[i];
    unsigned char r = s[j];

    if (!isalnum(l))
    {
        return palindrome(s, i + 1, j);
    }
    if (!isalnum(r))
    {
        return palindrome(s, i, j - 1);
    }

    if (tolower(l) != tolower(r))
    {
        return false;
    }

    return palindrome(s, i + 1, j - 1);
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << palindrome(s, 0, s.length() - 1) << endl;
    return 0;
}