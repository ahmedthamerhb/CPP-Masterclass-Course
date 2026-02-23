/* Project: 2D Array Operations - Matrix Summation
   Author: Ahmed Thamer
   Description: A C++ program demonstrating 2D array (Matrix) manipulation. 
                It features interactive user input with index tracking [i][j] 
                and performs a total summation of all elements in an N x N grid.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int n,i,j;
    // taking input of size of array
    cout<<"enter the size of array: ";
    cin>>n;
    
    int arr [n][n];
    // taking input of elements of array
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout<<"enter the elements of array ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    // calculating the sum of all elements of array
    int sum = 0;
    for (i=0; i<n ;i++){
        for (j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    // printing the sum of all elements of array
    cout<<"The sum of all elements is: "<<sum<<endl;

return 0;
}

/*output:
enter the size of array: 3

enter the elements of array [0][0]: 1
enter the elements of array [0][1]: 2
enter the elements of array [0][2]: 3
enter the elements of array [1][0]: 4
enter the elements of array [1][1]: 5
enter the elements of array [1][2]: 6
enter the elements of array [2][0]: 7
enter the elements of array [2][1]: 8
enter the elements of array [2][2]: 9

The sum of all elements is: 45
*/
