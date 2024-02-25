#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
    } else {
        int slast = 0;
        int last = 1;
        cout << slast << " " << last << " ";
        int cur;
        for (int i = 2; i <= n; i++) {
            cur = last + slast;
            slast = last;
            last = cur;
            cout << cur << " ";
        }
    }

}