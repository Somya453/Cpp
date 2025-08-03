#include <bits/stdc++.h> 
using namespace std;

//ASCII series

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

