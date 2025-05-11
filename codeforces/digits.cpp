// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <iostream>
#include <string>
using namespace std;

int main(){

    // outer loop length t
    // inner loops of length Xi of n
    // use string header
    // use element loop

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        string n;
        cin >> n;
        int s = n.size();

        for (int j = (s-1); j >= 0; j--){
            cout << n[j] << ' ';
        }
        cout << "\n";
    }

}
