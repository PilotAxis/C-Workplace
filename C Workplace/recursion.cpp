#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int i){
    if (i < 1) return;
    cout << i << endl;
    print(i-1);
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    print(n);
    return 0;
}