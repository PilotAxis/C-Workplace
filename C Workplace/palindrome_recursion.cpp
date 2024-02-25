#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s) {
    int left = 0;
    int right = s.length()-1;
    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])){
            right--;
        } else if (tolower(s[left]) != tolower(s[right])) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}
int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    bool ans = check_palindrome(str);
    if (ans == true) {
        cout << "Palindrome!" << endl;
    } else {
        cout << "Not a Palindrome!" << endl;
    }
    return 0;
}