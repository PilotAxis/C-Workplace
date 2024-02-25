#include<iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "Number is: " << n << endl;

    unsigned int num = 0;
    for (int i = 0; i < 32; i++) {
        num <<= 1;
        if (n&1) {
            num |= 1;
        }
        num >>= i;
    }
    cout << num << endl;
    return 0;
}