#include <bits/stdc++.h>
using namespace std;

// Print Factorial from 1 to N using recursion
int fact(int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is: " << fact(num) << endl;
    return 0;
}