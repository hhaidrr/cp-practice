#include <iostream>
#define ll long long
using namespace std;

int main() {
    // fixed input T determines length of loop
    // fixed loop of T collect input, 
    // input n
    // factorial logic, 
    // another loop to calculate the factorial
    // variable of running product p = 1
    // i = 1, i <= n, i++
    // p *= i
    // inner loop end, print product

    int t = 0;
    int n = 0;
    ll p = 1;

    cin >> t;

    while (cin >> n){
        if (n == 0){
            cout << 1 << "\n";
            continue;
        }
        for (ll i = 1; i <= n; i++) {
            p *= i;
        }
        cout << p << "\n";
        p = 1;
    }
    return 0;
}
