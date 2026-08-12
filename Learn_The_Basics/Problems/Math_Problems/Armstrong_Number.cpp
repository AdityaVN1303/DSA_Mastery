#include <bits/stdc++.h>
using namespace std;

// Given an integer N, return true it is an Armstrong number otherwise return false.
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

bool isArmstrong(int N)
{
    if (N < 0)
    {
        return false;
    }
    int len = to_string(N).size();

    long long ans = 0;
    int temp = N;
    while (temp > 0)
    {
        // If not accepted , write custom power function instead of pow.
        ans += pow(temp % 10, len);
        temp /= 10;
    }

    return N == ans;
}

int main()
{
    cout << isArmstrong(153);
    return 0;
}