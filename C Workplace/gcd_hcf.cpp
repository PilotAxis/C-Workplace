#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x, y;
    cin >> x >> y;
    cout << "Num 1: " << x << endl << "Num 2: " << y << endl;
    cout << gcd(x, y) << endl;
}