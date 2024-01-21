#include <iostream>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int N;
    cin >> N;
    cout << "Enter Number: " << N << endl;
    
    string x = to_string(N);
    cout << x.length();
    return 0;
}