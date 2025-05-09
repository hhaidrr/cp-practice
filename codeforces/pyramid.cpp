// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

#include <iostream>
#define ll long long
using namespace std;

int main() {
    // input n
    // single static loop n
    // triangle width count increments every iteration
    // inner loop length determined by width counter

    int n = 0;

    cin >> n;

    // i can take the place of the width counter since it ends up doing exactly what is needed
    for (int i = 1; i <= n; i ++) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}
