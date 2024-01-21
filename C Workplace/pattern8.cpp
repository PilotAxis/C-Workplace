#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*n-(2*i+1); j++) {
            cout << "*" << "";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int N;
    cin >> N;
    cout << "Lines? " << N << endl;
    pattern(N);
    return 0;
}