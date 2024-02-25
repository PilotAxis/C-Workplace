#include<iostream>
#include<bits/stdc++.h>
#include <list>
#include<fstream>
using namespace std;

int main(void) {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << number << " -> " << hash[number] << endl;
    }

    /*list<int> lst;
    lst.push_back(1);
    lst.push_back(3);
    lst.push_back(2);
    lst.push_back(2);
    lst.push_back(1);
    int count = 0;
    int query;
    cin >> query;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        if (*it == query) {
            count++;
        }
    }
    cout << count << endl;*/
    return 0;
}