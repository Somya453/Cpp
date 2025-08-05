#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a <= 10 && b >= 10) {
        cout << "True" << endl;
    }

    if (a % 2 == 0 || b % 2 == 0) {
        cout << "True" << endl;
    }

    if (a != b) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}



