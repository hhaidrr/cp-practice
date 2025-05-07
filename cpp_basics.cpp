#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a, b, c, d;
    ll r = 1;

    cin >> a >> b >> c >> d;

    r = (r * (a % 100)) % 100;
    r = (r * (b % 100)) % 100;
    r = (r * (c % 100)) % 100;
    r = (r * (d % 100)) % 100; 

    if (r < 10) cout << '0';
    cout << r;

    return 0;
}
