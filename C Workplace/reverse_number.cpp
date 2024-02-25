#include<iostream>
using namespace std;

int main(void) 
{
    #ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << "Given number: " << n << endl;
    int reverse = 0;
    while (n!=0)
    {
        int rem;
        rem = n % 10;
        if ((reverse > INT_MAX/10) || (reverse < INT_MIN/10)) {
            return 0;
        }
        n = n / 10;
        reverse = reverse * 10 + rem;
    }
    cout << reverse << endl;
    return 0;
}