/* Project: Array Operations - Vector Addition
   Author: Ahmed Thamer
   Description: A C++ program designed to perform element-wise addition 
                of two user-defined arrays. It demonstrates multi-array 
                coordination and synchronized loop processing.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int A[n] , B[n] , C[n];

    cout<<"Enter the elements of the first array: ";
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the elements of the second array: ";
    for(i=0;i<n;i++){
        cin>>B[i];
    }
    for(i=0;i<n;i++){
        C[i]=A[i]+B[i];
    }
    cout<<"The sum of the arrays is: ";
    for(i=0;i<n;i++){
        cout<<C[i]<<" ";
    }
    return 0;
}

/*output:
Enter the size of the array: 5
Enter the elements of the first array: 1 2 3 4 5
Enter the elements of the second array: 6 7 8 9 10
The sum of the arrays is: 7 9 11 13 15 
*/
