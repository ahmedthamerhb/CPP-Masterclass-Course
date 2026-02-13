/* Project: Diamond Pattern Challenge
   Author: Ahmed Thamer
   Description: Printing a diamond shape using nested loops and space logic.
*/

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the number of rows for the diamond (half height): ";
    cin >> n;

    // Upper Part of the Diamond
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower Part of the Diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = n; j > i; j--) {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // output: Enter the number of rows for the diamond (half height): 5
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    return 0;
}
