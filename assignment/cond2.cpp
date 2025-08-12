#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;

    long long sum = 0; // long long for safety, since |name| can be up to 10^6
    for (char c : name) {
        c = tolower(c); // case-insensitive
        sum += (c - 'a' + 1);
    }

    int remainder;
    if (remainder%3 == 0)
        cout << "Bad";
    else if (remainder%3 == 1)
        cout << "Good";
    else
        cout << "Excellent";

    return 0;
}
