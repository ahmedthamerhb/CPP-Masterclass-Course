/* Project: Number Analysis Tool
   Author: Ahmed Thamer
   Description: A program that analyzes integers to determine their sign (Positive, Negative, or Zero) 
                and parity (Even or Odd) using conditional logic and arithmetic operators.
   Language: C++
*/

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using if-else statements to determine if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Using if-else statements to determine if the number is even or odd
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
