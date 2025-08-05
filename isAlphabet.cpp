#include <iostream>
using namespace std;

// Function to check if character is an alphabet
void isAlphabet(char ch) {
    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        ? cout << "YES" << endl 
        : cout << "NO" << endl;
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;           // Take input from user
    isAlphabet(ch);      // Call the function with the input
    return 0;
}
