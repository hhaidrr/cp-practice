// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
//
#include <iostream>
using namespace std;

int main() {
    // while cin >> n >> m
    // input n, m as int
    // if n <= 0 or <= 0; return 0;
    // start, end, as int
    // if n less than m, start=n, end=m, else start=m, end=n 
    // int sum = 0;
    // loop from i=start, i <= end, i++
    //      cout i
    //      sum += i
    //  cout "sum = " sum

    int n, m;

    while (cin >> n >> m){
        if ((n <= 0) || (m <= 0)){
            return 0;
        }

        int start = n;
        int end = m;
        if (m < n){
            start = m;
            end = n;
        }

        int sum = 0;

        for (int i=start; i <= end; i++){
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << "\n";
    }

}

