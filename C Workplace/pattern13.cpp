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

    int space = 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
            cout << space;
            space += 1;
        }
        cout << endl;
    }
    return 0;
}