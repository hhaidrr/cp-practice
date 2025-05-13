// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    // cin t
    // outer loop of lenght t
    // cin n
    // convert to binary
    // first loop
    // vector<int> binary;
    // do
        // q = n / 2
        // r = n % 2
        // binary.push_back(r)
    // while q > 0
    //
    // vector<int> filtered; 
    //
    // for (i = 0; i < binary.size(); i++){
    //  if binary[i] == 1
    //      filtered.push_back(1)
    //
    // binary to decimal
    // d = 0
    // for (i = 0; i < filtered.size(); i++){
    //  d += filtered[i] * static_cast<int>(pow(2, i))
    //  
    // }
    //
    // cout d
    //  

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        // to binary
        vector<int> binary;
        int q = n;
        int r;
        do{
            r = q % 2;
            q = q / 2; 
            binary.push_back(r);
        } while (q > 0);

        vector<int> filtered;
        
        
        // filter
        for (int j = 0; j < binary.size(); j++){
            if (binary[j] == 1){
                filtered.push_back(binary[j]);
            }
        }

        // to decimal
        int d = 0;
        for (int j = 0; j < filtered.size(); j++){
            d += filtered[j] * static_cast<int>(pow(2, j));
        }
        cout << d << "\n";

    }
    return 0;

}
