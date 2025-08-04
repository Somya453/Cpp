#include <stdio.h>
#include <iostream>
#include <cctype>

using namespace std;

// int main() {
//     char c; // Default character for testing
//     cout << "Enter a character: ";
//     cin >> c;

//     if (islower(c)) {
//         c = toupper(c);
//     } else if (isupper(c)) {
//         c = tolower(c);
//     }

//     cout << c << endl;
//     return 0;
// }

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        c = c - 32; // Convert to uppercase
    } else if (c >= 'A' && c <= 'Z') {
        c = c + 32; // Convert to lowercase
    }

    cout << c << endl;


    return 0;
}
