#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name; // read the name

    // Convert to lowercase (if needed)
    for (char &c : name) {
        c = tolower(c);
    }

    // Sum of character values (a=1, b=2, ..., z=26)
    long long total = 0;
    for (char c : name) {
        total += (c - 'a' + 1);
    }

    // Check remainder
    int remainder = total % 3;
    if (remainder == 0) {
        cout << "bad";
    } else if (remainder == 1) {
        cout << "good";
    } else {
        cout << "excellent";
    }

    return 0;
}
