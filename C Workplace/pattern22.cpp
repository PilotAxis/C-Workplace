#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    for (int i = 0; i < 2*n-1; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            int top = i;
            int bot = j;
            int r = (2*n-2)-i;
            int l = (2*n-2)-j;
            cout << (n-min(min(top, bot), min(l, r))) << " ";
        }
        cout << endl;
    }
}