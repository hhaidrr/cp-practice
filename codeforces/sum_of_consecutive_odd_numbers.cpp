#include <iostream>
using namespace std;

int main(){
    // static input t
    // first loop length defined by t
    // cin x, y
    // int start=x, end=y, if y < x, flip
    // inner loop from start+1, end-1, ++
    // if mod % 2 != 0, sum += i
    // cout sum
    //
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int x, y;
        cin >> x >> y;

        int start = x;
        int end = y;

        if (y < x){
            start=y;
            end=x;
        }

        int sum = 0;
        for (int j = start + 1; j < end; j++){
            if (j % 2 != 0){
                sum += j;
            }
        }
        cout << sum << "\n";
    }

}

