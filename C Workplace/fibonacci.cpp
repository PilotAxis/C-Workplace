#include <iostream>
#include <string>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    cout << "Enter the value of t: " << t << endl;
    int first, second;
    first = 0;
    second = 1;
    if (t == 0) {
        cout << 0;
    } else if (t == 1) {
        cout << 1;
    } else 
    {
        int next;
        int total = t + 1;
        for (int i = 3; i <= total; i++) 
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Element is: " << next;
    }
    return 0;
}