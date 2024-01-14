#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    cout << "Sum is :" << a + b;
    return 0;
}