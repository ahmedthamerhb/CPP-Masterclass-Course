#include <iostream>
using namespace std;
int main () {

    // cout = print text or number
    // endl = drop a line
    cout << 'a'<<endl;
    cout << "Hello, World!" << endl;
    cout << 12345678 <<endl;

    // Types of variables (Charts)

    int a; // int = integer (whole number)
    float b; // float = decimal number (7 digits)
    double c; // double = decimal number (15 digits)
    char d; // char = single character (must be in single quotes)
    string e; // string = text (must be in double quotes)
    bool f; // bool = boolean (true 1 or false 0)



    // cin = get user input
    cout << "Enter an integer: ";
    cin >> a; // example input: 5
    cout << "You entered: " << a << endl; // output: You entered: 5

    cout << "Enter a decimal number: ";
    cin >> b; // example input: 3.14
    cout << "You entered: " << b << endl; // output: You entered: 3.14

    cout << "Enter a double: ";
    cin >> c; // example input: 3.141592653589793
    cout << "You entered: " << c << endl; // output: You entered:  3.141592653589793
    
    cout << "Enter a character: ";
    cin >> d; // example input: A
    cout << "You entered: " << d << endl; // output: You entered: A

    cout << "Enter a string: ";
    cin >> e; // example input: Hello
    cout << "You entered: " << e << endl; // output: You entered: Hello

    cout << "Enter a boolean (1 for true, 0 for false): ";
    cin >> f; // example input: 1
    cout << "You entered: " << f << endl; // output: You entered: 1

    // if statement = a block of code that will execute if a specified condition is true
    if (a==5) { 
        cout << "You entered the number 5!" << endl;
    } else {
        cout << "You did not enter the number 5." << endl;
    }
    
    // for loop = repeat a block of code a certain number of times
    // i=0 // the loop starts at 0
    // i<10 // the loop will continue as long as i is less than 10 and stops when i is 10
    // i++ // increase i by 1 each time the loop runs (i=i+1)
    
    for (int i = 0; i < 10; i++) {
        cout << "The value of i is: " << i << endl;
    }
    
    return 0;
}