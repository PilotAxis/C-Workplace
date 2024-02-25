#include <iostream>
using namespace std;

int palindrome(int N) {
    int reverse = 0;
    int org = N;
    while (N != 0) {
        int rem = N % 10;
        N = N / 10;
        reverse = reverse * 10 + rem;
    }
    return reverse;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << "Number? " << n << endl;
    int s = palindrome(n);
    if (n == s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}