#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkprime(int N) {
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    bool ans = checkprime(n);
    if (n != 1 && ans == true) {
        cout << "Prime!" << endl;
    } else {
        cout << "Not Prime!" << endl;
    } 
    return 0;
}