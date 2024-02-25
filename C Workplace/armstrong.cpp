#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check_armstrong(int N) {
    int original = N;
    int count = 0;
    int temp = N;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }
    int power = 0;
    while (N != 0) {
        int digit = N % 10;
        power += pow(digit, count);
        N = N / 10;
    }
    return (power == original);
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "Enter number: " << n << endl;
    if (check_armstrong(n)) {
        cout << "Armstrong number !" << endl;
    } else {
        cout << "Not a Armstrong Number !" << endl;
    }
    return 0;
    
}