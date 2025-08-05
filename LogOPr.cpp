#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout  << ((a <= 10 && b >= 10) ? "true" : "false") << endl;
    cout << ((a % 2 == 0 || b % 2 == 0) ? "true" : "false") << endl;
    cout  << ((a != b) ? "true" : "false") << endl;

    return 0;
}