#include <bits/stdc++.h>
using namespace std;

// Print Name N Times using recursion
void PrintName(int n)
{
    // TC ---> O(N)
    // SC --- Stack Space ---> O(N)
    if (n == 0)
    {
        return;
    }
    cout << "Aditya " << endl;
    PrintName(n - 1);
}

int main()
{
    int n = 5;
    PrintName(n);
    return 0;
}