/* Project: Array Operations - Insertion at the End
   Author: Ahmed Thamer
   Description: A C++ program to insert a new element at the last position of an array.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int i,n,num;

    // Input the size of the array
    cout<<"Enter the size of elements: ";
    cin>>n;

    int arr[n+1]; // Create an array of size n+1 to accommodate the new element
    
    // Input the elements of the array
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    // Input the value to be inserted at the end of the array
    cout <<"Enter The value To insert: ";
    cin>>num;

    // Insert the new value at the end
    arr[n]=num;

    n++; // Increment the size of the array to reflect the new element

    // Print the new array
    cout<<"The new array is: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;

    return 0;
}

/*output:
Enter the size of elements: 5
Enter the elements: 1 2 3 4 5
Enter The value To insert: 6
The new array is: 1 2 3 4 5 6
*/
