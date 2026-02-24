/* Project: Matrix Data Classifier (2D Array)
   Author: Ahmed Thamer
   Description: An analytical C++ program that processes a 2D matrix 
                to classify elements into Positive/Negative and 
                Even/Odd categories using nested conditional logic.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int i,j,n;
    // input of size of array
    cout <<"Enter the size of array: ";
    cin >> n;

    // input of array
    int arr[n][n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout <<"Enter the elements of array: " << "[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout <<"______________________________________________________________________" << endl;
    // check for positive and negative
    for (i=0 ;i<n;i++){
        for (j=0;j<n;j++){
            if (arr[i][j] >= 0) {
                cout <<"Positive: " << arr[i][j] << " " << endl;
            }
            else {
                cout <<"Negative: " << arr[i][j] << " " << endl;
            }
        }
    }
    cout <<"______________________________________________________________________" << endl;
    // check for even and odd
    for (i=0 ;i<n;i++){
        for (j=0;j<n;j++){
            if (arr[i][j] % 2 == 0) {
                cout <<"Even: " << arr[i][j] << " " << endl;
            }
            else {
                cout <<"Odd: " << arr[i][j] << " " << endl;
            }
        }
    }

return 0;
}

/*output:
Enter the size of array: 3
Enter the elements of array: [0][0]: 1
Enter the elements of array: [0][1]: 2
Enter the elements of array: [0][2]: 3
Enter the elements of array: [1][0]: -9
Enter the elements of array: [1][1]: 0
Enter the elements of array: [1][2]: -2
Enter the elements of array: [2][0]: 4
Enter the elements of array: [2][1]: -7
Enter the elements of array: [2][2]: -8
______________________________________________________________________
Positive: 1 
Positive: 2
Positive: 3
Negative: -9
Positive: 0
Negative: -2
Positive: 4
Negative: -7
Negative: -8
______________________________________________________________________
Odd: 1
Even: 2
Odd: 3
Odd: -9
Even: 0
Even: -2
Even: 4
Odd: -7
Even: -8
*/
