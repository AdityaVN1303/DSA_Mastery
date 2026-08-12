#include <bits/stdc++.h>
using namespace std;

// Print Sum from 1 to N using recursion
int sum(int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}
// Visualization of above code --->
// n + (n-1) + (n-2) ... + 1

int main()
{
    int n = 5;
    cout << "Sum of first " << n << " numbers is: " << sum(n) << endl;
    return 0;
}