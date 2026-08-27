#include <bits/stdc++.h>
using namespace std;

// Find All Divisors

// Using Divisor Pair Method (OPTIMAL)
// TC - O(sqrt(n))
// SC - O(1)
vector<int> findDivisors(int n)
{
    vector<int> divisors;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);

            if (i != n / i)
                // for Perfect Squares , n/i and i are same , handles duplicate divisors insertion
                divisors.push_back(n / i);
        }
    }

    return divisors;
}