#include <bits/stdc++.h>
using namespace std;

void printReverse(int i) {
    // Base condition
    if (i < 1) return;

    // Print first
    cout << i << endl;

    // Then call itself with a smaller number
    printReverse(i - 1);
}

int main() {
    int n = 4;
    printReverse(n);
    return 0;
}
