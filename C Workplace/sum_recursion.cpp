#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum = 0;
void summation(int N) {
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    summation(n);
    return 0;
}