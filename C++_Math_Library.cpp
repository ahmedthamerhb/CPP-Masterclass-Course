// This file demonstrates common math functions using the <cmath> library.

#include <iostream>
#include <cmath>
using namespace std;
int main () {

    // cmath = common math functions
    // pow(x,y) = x^y
    cout << pow(2,3) << endl; // output: 8

    // sqrt(x) = square root of x
    cout << sqrt(64) << endl; // output: 8

    // abs(x) = absolute value of x
    cout << abs(-5) << endl; // output: 5

    // ceil(x) = rounds x up to the nearest integer
    cout << ceil(4.2) << endl; // output: 5

    // floor(x) = rounds x down to the nearest integer
    cout << floor(4.8) << endl; // output: 4

    // round(x) = rounds x to the nearest integer
    cout << round(4.5) << endl; // output: 5

    // max(x,y) = returns the larger of x and y
    cout << max(5,10) << endl; // output: 10    

    // min(x,y) = returns the smaller of x and y
    cout << min(5,10) << endl; // output: 5

    return 0;
}
