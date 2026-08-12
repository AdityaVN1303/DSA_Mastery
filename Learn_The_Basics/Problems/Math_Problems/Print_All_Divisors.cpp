#include <bits/stdc++.h>
using namespace std;

// Given an integer N, return all divisors of N.
// A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

vector<int> divisors(int N)
{
    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

int main()
{
    vector<int> divs = divisors(12);
    for (int d : divs)
    {
        cout << d << " ";
    }
    return 0;
}