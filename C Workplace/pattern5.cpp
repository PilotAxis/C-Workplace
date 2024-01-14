#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "How many lines of pattern? " << n << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}