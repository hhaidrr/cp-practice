// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <iostream>
using namespace std;

int main() {
    // input n
    // outer loop starts at n, increments down to 1
    // inner loop length defined by parent loop counter (i)
    // cout *
    
    int n = 0;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << "\n";
    }

    return 0;
}
