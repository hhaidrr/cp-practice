#include <iostream>
#define ll long long
using namespace std;

int main() {
    // store counters for conditions
    // loop through all Xi, loop n times
    // counting conditions are mutually inclusive
    // formatted output

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int n = 0;
    int x = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;

        if (x % 2 == 0){
            even++;
        } else {
            odd++;
        }

        if (x > 0){
            positive++;
        } else if (x < 0){
            negative++;
        }
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative;



    return 0;
}
