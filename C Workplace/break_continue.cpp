#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {1, 2, 3, 4, 5};
    int target;
    cin >> target;
    cout << "Enter the target number: " << target << endl;

    for (int i : arr) {
        if (i == target) {
            cout << "Target found: " << i << endl;
            break;
        }
        cout << "Checking number: " << i << endl;
    }

    for (int j = 1; j <= 10; j++) {
        if (j % 2 == 0) {
            continue;
        }
        cout << "Odd number found: " << j << endl;
    }
    return 0;
}