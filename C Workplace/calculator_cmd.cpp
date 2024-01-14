#include <iostream>
using namespace std;

int add(int m, int n) {
    int c = m + n;
    return c;
}
int difference(int m, int n) {
    int c = m - n;
    return c;
}
int product(int m, int n) {
    int c = m * n;
    return c;
}
int divide(int m, int n) {
    int c = m / n;
    return c;
}
int mod(int m, int n) {
    int c = m % n;
    return c;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b, c, d, e;
    cout << "1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Modulus" << endl;
    int num;
    cin >> num;
    cout << "Enter a choice: " << num << endl;
    int x, y;
    cin >> x >> y;
    cout << "You entered: " << x << " and " << y << endl;
    switch (num) {
        case 1:
            a = add(x, y);
            cout << "Sum is: " << a << endl;
            break;
        case 2:
            b = difference(x, y);
            cout << "Difference is: " << b << endl;
            break;
        case 3:
            c = product(x, y);
            cout << "Product is: " << c << endl;
            break;
        case 4:
            d = divide(x, y);
            cout << "Division is: " << d << endl;
            break;
        case 5:
            e = mod(x, y);
            cout << "Mod is: " << e << endl;
            break;
    }
    return 0;
}