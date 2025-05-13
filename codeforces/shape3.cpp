#include <iostream>
using namespace std;

int main(){
    // input n
    // outer loop length of n, i
    // inner loop, j
    // l = (n-1) * 2 + 1
    // a = i * 2 + 1
    // s = l - a
    // start = s / 2
    // end = start + a

    // outer loop length of n, i = (n-1), i >= 0; i--
    // inner loop, j
    // l = (n-1) * 2 + 1
    // a = i * 2 + 1
    // s = l - a
    // start = s / 2
    // end = start + a
    //

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int l = ((n-1) * 2) + 1;
        int a = (i * 2) + 1;
        int s = l - a;
        int start = s / 2;
        int end = start + a;

        for (int j = 0; j < end; j++){
            if (start <= j && j < end){
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << "\n";
    }

    for (int i = n-1; i >= 0; i--){
        int l = ((n-1) * 2) + 1;
        int a = (i * 2) + 1;
        int s = l - a;
        int start = s / 2;
        int end = start + a;

        for (int j = 0; j < end; j++){
            if (start <= j && j < end){
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}
