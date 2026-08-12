#include <bits/stdc++.h>
using namespace std;

// GCD/HCF ---> Greatest common Divisor or Highest Common Factor
// For every 2 numbers there is going to be a gcd that is 1.

// Given two integers N1 and N2, find their greatest common divisor.

int gcdBrute(int a, int b)
{
    // Brute force Approach - O(N) (O(min(a , b)))
    // Optimizations -
    // - Iterating from end , hence will the moment we get the common divisor , its going to be greatest.
    for (int i = min(a, b); i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

int gcdEuclidean(int a, int b)
{
    // Time Complexity ---> O(logn) (division happening)
    // 15 20
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a == 0 ? b : a;
}

// Uses State Transfer Trick using Module
int gcdEuclideanOptimized(int a, int b)
{
    // here , Modulo is providing free who is greater than whom comparison , so no need to compare it seperately. modulo by default returns smallest number among 2 if divsor is greater than dividend. We use it and always keep b as the divisor and a as dividend.
    // Code is written in such a way that , b is always the Bigger number, if not , it will get swapped with a. And we know the bigger number is always the one which gets 0. Hence b is checked with 0 and a is returned.
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Problem Solution - Euclidean --->
// if N1 , N2 are 2 numbers , then
// gcd(N1 , N2) = gcd(N1-N2 , N2) ... N1 > N2
// gcd(a , b) = gcd(a-b , b) ... a > b
// Strategy - Keep applying euclidean till 1 of the 2 numbers becomes 0 , once one of the number is 0 , then the other one is the gcd.
// gcd(15 , 20) ---> gcd(15 , (20-15=5)) ---> gcd(1(15-5=10) , 5) ---> gcd((10-5=5) , 5) ---> gcd((5-5=0) , 5)
// Subtracting each time gives n=4 iteration.
// Instead , gcd(15 , 20) ---> gcd((20%15=5) , 15) ---> gcd((15%5=0) , 5)
// Modulo method gave n=2 iterations.
// The subtracted or modulo value is always replaced with the number who is greater. Ex - for (15 , 20) , the modulo will replace 20 only. (15 , 5)

int main()
{
    cout << gcdEuclidean(15, 20);
    return 0;
}