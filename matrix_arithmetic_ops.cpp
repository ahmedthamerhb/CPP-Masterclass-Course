/* Project: Matrix Arithmetic - Element-wise Operations
   Author: Ahmed Thamer
   Description: A C++ program that performs element-wise addition, 
                subtraction, and multiplication between two matrices 
                of size R x C.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int r,c,i,j;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;

    int a[r][c] ,b[r][c], sum[r][c] ,diff[r][c],prod[r][c];

    cout<<"____________________________________________________________"<<endl;
    // Input first matrix
    cout<<"Enter the elements of the matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<"____________________________________________________________"<<endl;
    // Input second matrix
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    
    // Performing addition, subtraction and multiplication of matrices
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
            prod[i][j] = a[i][j] * b[i][j];
        }
    }
    
    cout<<"____________________________________________________________"<<endl;
    // Displaying the results
    cout<<"Sum of matrices: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"____________________________________________________________"<<endl;
    // Displaying the results
    cout<<"Difference of matrices: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<diff[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"____________________________________________________________"<<endl;
    // Displaying the results
    cout<<"Product of matrices: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<prod[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*output:
Enter the number of rows: 3
Enter the number of columns: 3
____________________________________________________________
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
____________________________________________________________
Enter the elements of the second matrix:
9 8 7
6 5 4
3 2 1
____________________________________________________________
Sum of matrices:
10 10 10
10 10 10
10 10 10
____________________________________________________________
Difference of matrices:
-8 -6 -4
-2 0 2
4 6 8
____________________________________________________________
Product of matrices:
9 16 21
24 25 24
21 16 9

*/
