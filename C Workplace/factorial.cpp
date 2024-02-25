#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int N;
    cin >> N;
    cout << "Enter the number: " << N << endl;
    int fact = 1;
    int t = N;
    if (N == 0) {
        cout << 1;
    }
    while (N > 0)
    {
        fact *= N;
        N--;
    }
    cout << "Factorial of " << t << " is: " << fact << endl;
}