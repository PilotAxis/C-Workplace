#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern12(int N) {
    int start = 2*(N-1);
    for (int i = 0; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j, "";
        }
        for (int j = 1; j <= start; j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << "";
        }
        cout << endl;
        start -= 2;
    }
}
int main() {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << "Lines? " << n << endl;
    pattern12(n);
    return 0;
}