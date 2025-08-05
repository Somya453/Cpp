//Increment and Decrement Operators in C++
//Increment operator (++) increases the value of a variable by 1
//Decrement operator (--) decreases the value of a variable by 1

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Incrementing a and b
    cout << "Value of X incremented by 1: " << ++a << endl;
    cout << "Value of Y incremented by 1: " << ++b << endl;

    // Decrementing a and b
    cout << "Value of X decremented by 1: " << --a << endl;
    cout << "Value of Y decremented by 1: " << --b << endl;

    return 0;
}