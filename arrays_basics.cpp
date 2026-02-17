/* Project: Array Operations - Input & Display
   Author: Ahmed Thamer
   Description: A fundamental C++ program that demonstrates how to initialize 
                arrays, handle user-defined sizes, and manage data using 
                loops for input, output and sum array operations.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    // Variable to hold the size of the array
    int n,sum=0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
        // Calculate the sum of the elements
        sum+=arr[i];
    }
    
    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    // Print the sum of the elements
    cout<<"Sum is= "<<sum<<endl;
    return 0;
}
