#include <bits/stdc++.h>
using namespace std;

// Given an integer N, return the number of digits in N.
int digits1(int N){
    int count = 0;
    while(N > 0){
        count++;
        N /= 10;
    }
    return count;
}
int digits2(int N){
    string str = to_string(N);
    return str.size();
}

int main() {
    cout<<digits1(123)<<endl;
    cout<<digits2(123)<<endl;
    return 0;
}