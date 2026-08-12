#include <bits/stdc++.h>
using namespace std;

// Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2..

bool isPrime(int N)
{
    if (N <= 1)
        return false;
    if (N == 2)
        return true;

    for (int i = 2; (long long)i * i <= N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isPrime(17) << endl;
    return 0;
}