#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int N;
    cin >> N;
    cout << "How many lines of pattern? " << N << endl;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}