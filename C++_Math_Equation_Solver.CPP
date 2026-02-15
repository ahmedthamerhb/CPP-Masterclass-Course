// Q/ Write a C++ program to calculate the value of y based on the following conditions:
//    | x^2 + 5x - |-20|    ,if x > 0;
// y= | 0                   ,if x = 0;
//    | x^3 + (5x)2 -10     ,if x < 0;

/* Project: Mathematical Equation Solver (Piecewise Function)
   Author: Ahmed Thamer
   Description: Calculates the value of 'y' based on 'x' using conditional logic 
                and the <cmath> library for power and absolute functions.
*/


#include <iostream>
#include <cmath>
using namespace std;
int main () {

    float x, y;
    cout << "Enter the value of x: ";
    cin >> x;

    if (x > 0) {
        y = pow(x, 2) + 5*x - abs(-20);
    } 
    else if (x == 0) {
        y = 0;
    } 
    else {
        y = pow(x, 3) + (5*x)*2- 10;
    }
    
    cout << "The value of y is: " << y << endl;
    return 0;
}
