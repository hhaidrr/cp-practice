#include <iostream>
#define ll long long
using namespace std;

int main() {
    // input x
    // variable length loop (2 - x-1)
    // check divisibilty, if true, circuit break, print NO
    // loop end, print YES
    int x = 0;

    cin >> x;


    for (int i = 2; i < x; i++){
        if (x % i == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
