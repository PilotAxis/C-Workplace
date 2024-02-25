#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_Array(int ans[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
void reversed(int arr[], int N) {
    int ans[N];
    for (int i = N-1; i >= 0; i --) {
        ans[N-i-1] = arr[i];
    }
    print_Array(ans, N);
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    reversed(arr, n);
    return 0;
}