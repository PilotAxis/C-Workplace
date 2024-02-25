#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    for (int i = 1; i <= 10; i++) {
        cout << "2 x " << i << " = " << 2*i << endl;
    }
    return 0;
}