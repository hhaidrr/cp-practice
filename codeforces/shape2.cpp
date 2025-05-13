#include <iostream>
using namespace std;

int main(){
    // input n 
    // outer loop length defined by n, i
    // inner loop length defined by n, j
    // need to print a length of i centered in n space
    // print condition if we are in the range of center based on i
    // n - i = total white space (s)
    // s / 2
    // Xn s = 0, Xn-1 = 
    // let i be the row index
    // let a be the amount of asterisks in a rwo
    // let s be the amount of whitespace in a row
    // let l be the total length of a row
    // 0. i=0, a=1, s=6, l=7
    // 1. i=1, a=3, s=4, l=7
    // 2. i=2, a=5, s=2, l=7
    // 3. i=3, a=7, s=0, l=7
    // l = (n-1) * 2 + 1
    // a = (i * 2) + 1 
    // s = l - a
    // 
    // begin = s / 2  
    // end = l - (s/2)
    // if j >= begin < end
    //      cout *
    // else:
    //      cout " "
    //
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int l = ((n-1) * 2) + 1;
        int a = (i * 2) + 1;
        int s = l - a;
        int start = s / 2;
        int end = start + a;
        // row left length (left spaces + asterisks) but not right spaces

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
