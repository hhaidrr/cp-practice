// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <iostream>
#define ll long long
using namespace std;

int main() {
    // inputs s, n
    // n determines static length of first loop
    // Xi determines inner loop lengths
    // cout s

    char s = '+';
    int n = 0;

    cin >> s;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x = 0;
        cin >> x;

        for (int j = 0; j < x; j++){
            cout << s;
        }
        cout << "\n";
    }

    return 0;
}




