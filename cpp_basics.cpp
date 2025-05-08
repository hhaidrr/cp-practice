#include <iostream>
#define ll long long
using namespace std;

int main() {
    // infinite loop
    // get input
    // compare equality
    // print then terminate
    int x = 0;

    while (cin >> x){
        if (x == 1999){
            cout << "Correct\n";
            return 0;
        }
        cout << "Wrong\n";
    }
    return 0;
}
