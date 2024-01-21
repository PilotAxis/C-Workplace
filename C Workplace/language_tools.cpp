#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    /*vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v[0] << endl;
    cout << v.size() << endl;
    return 0;*/

    set<int> s;
    s.insert(1);
    auto it = s.find(1);
    if (it != s.end()) {
        cout << "Found!" << endl;
    }
    cout << s.size() << endl;
}