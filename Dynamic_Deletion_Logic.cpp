/* Project: Array Operations - Delete Element by Index
   Author: Ahmed Thamer
   Description: An advanced C++ program that allows users to delete an element 
                at any specific index. It handles error checking for invalid 
                indices and shifts elements to maintain array integrity.
   Language: C++
*/

#include <iostream>
using namespace std;
int main () {
    int n,i,pos;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";

    // taking input in array
    for (i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout <<"Enter the position of element to delete: ";
    cin>>pos;

    if (pos<1 || pos>n) {
        cout<<"Invalid position!"<<endl;
        return 0;
    }

    else {

        // deleting element at given position
        for (i=pos-1; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
    }

    n--; // reducing the size of array by 1

    cout <<"Array after deleting element at position "<<pos<<": ";
    for (i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    return 0;
}

/*output:
Enter the size of array: 5
Enter the elements of array: 10 20 30 40 50
Enter the position of element to delete: 3
Array after deleting element at position 3: 10 20 40 50 
*/
