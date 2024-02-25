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

    int start = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
    
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    
}