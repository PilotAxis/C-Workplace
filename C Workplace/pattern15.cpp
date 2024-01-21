#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "Lines? " << n << endl;
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n-i-1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}