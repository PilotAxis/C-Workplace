#include <iostream>
using namespace std;

int maximize(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int minimize(int x, int y) {
    if (x > y) {
        return y;
    } else {
        return x;
    }
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b, m, n, k;
    cin >> n >> a >> b;
    cout << "Enter the choice: " << n << endl;
    switch (n)
    {
    case 1:
        m = maximize(a, b);
        cout << m << endl;
        break;
    case 2:
        swap(a, b);
        cout << a << " " << b << endl;
        break;
    case 3:
        k = minimize(a, b);
        cout << k << endl;
        break;
    default:
        cout << "Invalid Number !" << endl;
    }
    return 0;
}