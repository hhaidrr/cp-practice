// find all divisors up to x 
// loop from x -> 1
//      if dibisible append to divisors for that x
//
//  do this for a, b
//
//  find gcd between sets of divisors
//
//  it doesnt matter which one you pick, but when you iterate from sorted order greatest to smallest, the first element that is prescent in the other is the GCD
//  iterate through a in descending order 
//  quickest way to check for existince is with a hashset b
//
//
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> all_divisors(int x){
    vector<int> divisors;
    for (int i=x; i >= 1; i--){
        bool divisible = (x % i) == 0;
        if (divisible){
            divisors.push_back(i);
        }
    }
    return divisors;

}

int main(){
    int a, b;
    cin >> a >> b;

    vector<int> a_divisors = all_divisors(a);
    // for (int x: a_divisors){
    //     cout << x << ", ";
    // }
    // cout << "\n";
    vector<int> b_divisors = all_divisors(b);
    // for (int x: b_divisors){
    //     cout << x << ", ";
    // }
    // cout << "\n";

    unordered_set<int> a_set(a_divisors.begin(), a_divisors.end());
    // for (int x: a_set){
    //     cout << x << ", ";
    // }
    // cout << "\n";

    for (int i = 0; i < b_divisors.size(); i++){
        int divisor = b_divisors[i];
        bool exists_in_other = a_set.count(divisor) == 1;
        if (exists_in_other){
            cout << divisor;
            return 0;
        }
    }
    return 0;
}
