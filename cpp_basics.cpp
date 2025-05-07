#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a, b, c, d;
    ll r = 1;

    cin >> a >> b >> c >> d;

    r = (r * a) % 100;
    r = (r * b) % 100;
    r = (r * c) % 100;
    r = (r * d) % 100; 

    cout << r;

    return 0;
}
