/* Project: Matrix Anatomy & Structural Analysis
   Author: Ahmed Thamer
   Description: A comprehensive C++ tool that dissects a square matrix. 
                It extracts the Main Diagonal, Anti-Diagonal, 
                Upper Triangular, and Lower Triangular elements using 
                mathematical indexing conditions.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int n,i,j;
    cout <<"Enter the size of the matrix: ";
    cin >>n;

    cout<< "\n____________________________________________________________"<<endl;
    int a[n][n];
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            cout <<"Enter the elements of the matrix: "<<"["<<i<<"]["<<j<<"] : ";
            cin >>a[i][j];
        }
    }
    
    cout<< "\n____________________________________________________________"<<endl;
    cout <<"The elements of the matrix are: "<<endl;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    
    cout<< "\n____________________________________________________________"<<endl;
    cout <<"The diagonal elements of the matrix are: "<<endl;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            if (i==j) { // condition for diagonal elements
                cout <<a[i][j]<<" ";
                }
        cout <<endl;
    }
}

    cout<< "\n____________________________________________________________"<<endl;
    cout <<"The anti-diagonal elements of the matrix are: "<<endl;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            if (i+j==n-1) { // condition for anti-diagonal elements
                cout <<a[i][j]<<" ";
                }
        cout <<endl;
    }
}
    cout<< "\n____________________________________________________________"<<endl;
    cout <<"The upper triangular elements of the matrix are: "<<endl;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i < j) { // condition for upper triangular elements
                cout <<a[i][j]<<" ";
            }
        cout <<endl;
        }
    }

    cout<< "\n____________________________________________________________"<<endl;
    cout <<"The lower triangular elements of the matrix are: "<<endl;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i > j) { // condition for lower triangular elements
                cout <<a[i][j]<<" ";
            }
        cout <<endl;
        }
    }

    return 0;
}

/*output:
Enter the size of the matrix: 3
____________________________________________________________
Enter the elements of the matrix: [0][0] : 1
Enter the elements of the matrix: [0][1] : 2
Enter the elements of the matrix: [0][2] : 3
Enter the elements of the matrix: [1][0] : 4
Enter the elements of the matrix: [1][1] : 5
Enter the elements of the matrix: [1][2] : 6
Enter the elements of the matrix: [2][0] : 7
Enter the elements of the matrix: [2][1] : 8
Enter the elements of the matrix: [2][2] : 9
____________________________________________________________
The elements of the matrix are:
1 2 3
4 5 6
7 8 9
____________________________________________________________
The diagonal elements of the matrix are:
1
5
9
____________________________________________________________
The anti-diagonal elements of the matrix are:
3
6
7
____________________________________________________________
The upper triangular elements of the matrix are:
2 3
6
____________________________________________________________
The lower triangular elements of the matrix are:
4
7 8

*/
