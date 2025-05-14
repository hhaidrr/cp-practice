// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

#include <iostream>
using namespace std;

int floor(double x){
    return static_cast<int>(x);
}

int ceil(double x){
    int floor_x = floor(x);
    double distance_to_floor = x - floor_x;
    if (distance_to_floor > 0){
        return floor_x + 1;
    }
    return floor_x;
}

int round(double x){
    // if difference between it and it's ceil is less than or equal to the difference between it and it's floor, then return the ceil else return the floor
    int ceil_x = ceil(x);
    int floor_x = floor(x);
    double distance_to_ceil = ceil_x - x;
    double distance_to_floor = x - floor_x;

    if (distance_to_ceil <= distance_to_floor){
        return ceil_x;
    } else {
        return floor_x;
    }
}


int main(){
    int a, b;
    cin >> a >> b;

    double x = static_cast<double>(a) / b;
    int f = floor(x);
    int c = ceil(x);
    int r = round(x);

    cout << "floor " << a << " / " << b << " = " << f << "\n";
    cout << "ceil " << a << " / " << b << " = " << c << "\n";
    cout << "round " << a << " / " << b << " = " << r << "\n";
    return 0;
}
