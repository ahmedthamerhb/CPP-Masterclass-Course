/* Project: Pattern Printing using Nested Loops
   Author: Ahmed Thamer
   Description: This script demonstrates various patterns (Square, Triangle, Reversed, and Numeric)
*/

#include <iostream>
using namespace std;

int main () {
    int i,j;

    for (i=1; i<=3; i++) {
        for (j=1; j<=3; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // output:
    // * * * 
    // * * *
    // * * *

    cout <<"-------------------" << endl;
    for (i=1; i<=4; i++) {
        for (j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // output:
    // *
    // * *
    // * * *
    // * * * *


    cout <<"-------------------" << endl;
    for (i=4; i>=1; i--) {
        for (j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // output:
    // * * * *
    // * * *
    // * *
    // *

    cout <<"-------------------" << endl;
    for (i=1; i<=4; i++) {
        for (j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // output:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    cout <<"-------------------" << endl;
    for (i=1; i<=4; i++) {
        for (j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // output:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    cout <<"-------------------" << endl;

    return 0;
}
