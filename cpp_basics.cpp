#include <iostream>
#define ll long long
using namespace std;

int main() {
    // input n
    //  fixed loop of 12
    // print n * i = (n * i)
    int n = 0;
    cin >> n;

    for (int i = 1; i <= 12; i++){
        cout << n << " * " << i << " = " << (n * i) << "\n";
    }
    return 0;
}
