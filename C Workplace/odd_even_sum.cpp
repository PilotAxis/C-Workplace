#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "Enter the number: " << n << endl;
    int even = 0;
    int odd = 0;
    while (n > 0) {
        int r = n % 10;
        n = n / 10;
        if (r % 2 == 0) {
            even = even + r;
        } else {
            odd = odd + r;
        }
    }
    cout << even << " " << odd << endl;
}